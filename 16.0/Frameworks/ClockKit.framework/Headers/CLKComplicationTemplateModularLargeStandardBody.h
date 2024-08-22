// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARLARGESTANDARDBODY_H
#define CLKCOMPLICATIONTEMPLATEMODULARLARGESTANDARDBODY_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *body1ImageProvider; // ivar: _body1ImageProvider
@property (copy, nonatomic) CLKTextProvider *body1TextProvider; // ivar: _body1TextProvider
@property (copy, nonatomic) CLKTextProvider *body2TextProvider; // ivar: _body2TextProvider
@property (copy, nonatomic) CLKImageProvider *headerImageProvider; // ivar: _headerImageProvider
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider
@property (copy, nonatomic) CLKTextProvider *headerTrailingTextProvider; // ivar: _headerTrailingTextProvider
@property (nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst; // ivar: _shouldTruncateHeaderLeadingLabelFirst


+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 ;
+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3 ;
+(id)templateWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 ;
+(id)templateWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 body2TextProvider:(id)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 ;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3 ;
-(id)initWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 ;
-(id)initWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 body2TextProvider:(id)arg2 ;
-(void)_enumerateBOOLKeysWithBlock:(id)arg0 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif