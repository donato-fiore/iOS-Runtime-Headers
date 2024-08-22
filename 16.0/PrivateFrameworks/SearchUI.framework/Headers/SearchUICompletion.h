// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOMPLETION_H
#define SEARCHUICOMPLETION_H

@class NSString, SFCardSection, NSAttributedString, SFImage, SFSearchResult;

#import <Foundation/Foundation.h>


@interface SearchUICompletion : NSObject

@property (retain, nonatomic) NSString *bridgeString; // ivar: _bridgeString
@property (readonly, nonatomic) SFCardSection *cardSection; // ivar: _cardSection
@property (readonly, nonatomic) BOOL completionResultIsPotentiallyPunchout; // ivar: _completionResultIsPotentiallyPunchout
@property (retain, nonatomic) NSAttributedString *completionString; // ivar: _completionString
@property (readonly, nonatomic) NSString *copyableString; // ivar: _copyableString
@property (retain, nonatomic) NSString *extensionString; // ivar: _extensionString
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (readonly, nonatomic) SFSearchResult *result; // ivar: _result
@property (readonly, nonatomic) NSString *typedString; // ivar: _typedString


+(BOOL)stringMatchesWritingDirection:(id)arg0 ;
+(BOOL)supportsResult:(id)arg0 cardSection:(id)arg1 ;
+(id)initWithTypedString:(id)arg0 result:(id)arg1 cardSection:(id)arg2 ;
+(id)localizedNameForBundleIdentifier:(id)arg0 ;
+(id)openString;
+(struct _NSRange )nonPartialRangeOfTypedString:(id)arg0 inString:(id)arg1 ;
-(id)completionStringWithString:(id)arg0 ;
-(id)description;
-(id)initWithTypedString:(id)arg0 result:(id)arg1 cardSection:(id)arg2 ;
-(id)nonPrefixMatchExtensionString;
-(id)prefixMatchExtensionString;
-(void)updateFields;


@end


#endif