// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCCOMPANIONBASEDATASOURCE_H
#define NWCCOMPANIONBASEDATASOURCE_H

@class CLKCComplicationBundleDataSource, CLKComplicationTemplate;



@interface NWCCompanionBaseDataSource : CLKCComplicationBundleDataSource {
    CLKComplicationTemplate *_template;
}




+(id)appIdentifier;
+(id)complicationLocalizationKey;
+(id)localizedAppName;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(id)sampleTemplate;
-(void)_localeDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif