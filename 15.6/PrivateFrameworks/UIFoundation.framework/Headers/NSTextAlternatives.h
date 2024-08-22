// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSTEXTALTERNATIVES_H
#define NSTEXTALTERNATIVES_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSTextAlternatives : NSObject <NSSecureCoding>

 {
    NSString *_primaryString;
    NSArray *_alternativeStrings;
    id *_internal;
}


@property (readonly) NSArray *alternativeStrings;
@property (nonatomic) BOOL isLowConfidence; // ivar: _isLowConfidence
@property (readonly) NSString *primaryString;


+(BOOL)supportsSecureCoding;
-(NSUInteger)numberOfAlternatives;
-(id)alternativeAtIndex:(NSUInteger)arg0 ;
-(id)alternatives;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalText:(id)arg0 alternatives:(id)arg1 ;
-(id)initWithOriginalText:(id)arg0 alternatives:(id)arg1 identifier:(id)arg2 ;
-(id)initWithPrimaryString:(id)arg0 alternativeStrings:(id)arg1 ;
-(id)initWithPrimaryString:(id)arg0 alternativeStrings:(id)arg1 identifier:(id)arg2 ;
-(id)initWithPrimaryString:(id)arg0 alternativeStrings:(id)arg1 identifier:(id)arg2 isLowConfidence:(BOOL)arg3 ;
-(id)initWithPrimaryString:(id)arg0 alternativeStrings:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(id)originalText;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)noteSelectedAlternativeString:(id)arg0 ;


@end


#endif