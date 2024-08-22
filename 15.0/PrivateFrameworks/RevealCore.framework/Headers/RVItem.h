// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RVITEM_H
#define RVITEM_H

@class NSString, DDScannerResult, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RVQuery.h"

@interface RVItem : NSObject <NSSecureCoding>

 {
    BOOL _normalized;
}


@property (retain, nonatomic) id *clientHints; // ivar: _clientHints
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSInteger contactPropertyType; // ivar: _contactPropertyType
@property (readonly, nonatomic) NSString *contactPropertyValue; // ivar: _contactPropertyValue
@property (readonly, nonatomic) DDScannerResult *ddResult; // ivar: _ddResult
@property (readonly, nonatomic) _NSRange highlightRange; // ivar: _highlightRange
@property (retain, nonatomic) NSString *leadingText; // ivar: _leadingText
@property (readonly, nonatomic) NSInteger normalizedType; // ivar: _normalizedType
@property (readonly, nonatomic) NSURL *normalizedURL;
@property (retain, nonatomic) NSString *originalSelectedText; // ivar: _originalSelectedText
@property (readonly, nonatomic) RVQuery *query; // ivar: _query
@property (readonly, nonatomic) NSInteger selectionType; // ivar: _selectionType
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSString *textSearchContext;
@property (retain, nonatomic) NSString *trailingText; // ivar: _trailingText
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)constrainContextSubstring:(id)arg0 range:(struct _NSRange )arg1 leading:(BOOL)arg2 ;
-(id)getClientHintKey:(id)arg0 ofType:(Class)arg1 ;
-(id)initWithClientIdentifier:(id)arg0 rangeInContext:(struct _NSRange )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactProperty:(NSInteger)arg0 value:(id)arg1 rangeInContext:(struct _NSRange )arg2 ;
-(id)initWithDDResult:(id)arg0 ;
-(id)initWithSearchQuery:(id)arg0 rangeInContext:(struct _NSRange )arg1 ;
-(id)initWithText:(id)arg0 clickedIndex:(NSUInteger)arg1 selectionRanges:(id)arg2 shouldUpdateSelection:(*BOOL)arg3 ;
-(id)initWithText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(id)initWithText:(id)arg0 selectedRange:(struct _NSRange )arg1 customURLParser:(id)arg2 ;
-(id)initWithURL:(id)arg0 rangeInContext:(struct _NSRange )arg1 ;
// -(void)commonInitWithText:(id)arg0 selectedRange:(struct _NSRange )arg1 customURLParser:(id)arg2 lookup:(unk)arg3  ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)normalize;
// -(void)normalizeWithParser:(id)arg0 lookupOnly:(unk)arg1  ;


@end


#endif