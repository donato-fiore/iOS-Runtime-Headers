// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARLARGETALLBODY_H
#define CLKCOMPLICATIONTEMPLATEMODULARLARGETALLBODY_H

@class NSDictionary, NSDate;


#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"
#import "CLKImageProvider.h"

@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate

@property (copy, nonatomic) NSDictionary *additionalContentAttributes; // ivar: _additionalContentAttributes
@property (copy, nonatomic) CLKTextProvider *bodyTextProvider; // ivar: _bodyTextProvider
@property (copy, nonatomic) NSDate *contentDate;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider; // ivar: _headerImageProvider
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider
@property (copy, nonatomic) CLKTextProvider *headerTrailingTextProvider; // ivar: _headerTrailingTextProvider
@property (nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst; // ivar: _shouldTruncateHeaderLeadingLabelFirst


+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
+(id)templateWithHeaderTextProvider:(id)arg0 bodyTextProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
-(id)initWithHeaderTextProvider:(id)arg0 bodyTextProvider:(id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(id)arg0 ;
-(void)_enumerateDateKeysWithBlock:(id)arg0 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif