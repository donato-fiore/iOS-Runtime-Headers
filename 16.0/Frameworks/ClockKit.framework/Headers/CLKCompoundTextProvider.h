// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPOUNDTEXTPROVIDER_H
#define CLKCOMPOUNDTEXTPROVIDER_H

@class NSMutableArray, NSString;


#import "CLKTextProvider.h"

@interface CLKCompoundTextProvider : CLKTextProvider {
    NSMutableArray *_textProviders;
    NSMutableArray *_segments;
    NSString *_sessionCacheKey;
}




+(BOOL)supportsSecureCoding;
+(id)compoundProviderWithLocalizedFormat:(id)arg0 localizedTextProviders:(id)arg1 ;
+(id)compoundTextProviderCurrentlyFormattingOnThisThread;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_updateFrequency;
-(NSInteger)timeTravelUpdateFrequency;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_arrayOfTextProviderJSONObjectRepresentations;
-(id)_attributedStringForSegment:(id)arg0 withStyle:(id)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_replacementForTextProvider:(id)arg0 index:(NSUInteger)arg1 withStyle:(id)arg2 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(id)arg0 arguments:(char *)arg1 ;
-(id)initWithSegments:(id)arg0 textProviders:(id)arg1 ;
-(void)_endSession;
-(void)_processFormat:(id)arg0 arguments:(char *)arg1 ;
-(void)_startSessionWithDate:(id)arg0 ;
-(void)addTextProvider:(id)arg0 andGetPlaceholderString:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif