// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSATTRIBUTEDSTRINGINTENTRESOLVER_H
#define _NSATTRIBUTEDSTRINGINTENTRESOLVER_H

@class NSString;
@protocol _NSAttributedStringIntentResolution;

#import <Foundation/Foundation.h>


@interface _NSAttributedStringIntentResolver : NSObject <_NSAttributedStringIntentResolution>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)attributedStringByResolvingString:(id)arg0 ;
+(id)attributesByResolvingIntentsInAttributes:(id)arg0 ;
+(id)fontAttributeValueForInlineIntent:(NSInteger)arg0 suggestedBaseFont:(id)arg1 suggestingTheDefaultFont:(BOOL)arg2 ;
+(id)fontAttributeValueForInlinePresentationIntent:(NSUInteger)arg0 suggestedBaseFont:(id)arg1 suggestingTheDefaultFont:(BOOL)arg2 ;
// +(void)_replaceInlinePresentationIntent:(id)arg0 get:(id)arg1 set:(unk)arg2  ;
+(void)_replaceInlinePresentationIntentInString:(id)arg0 range:(struct _NSRange )arg1 value:(id)arg2 ;
+(void)resolveAttributedString:(id)arg0 inRange:(struct _NSRange )arg1 ;


@end


#endif