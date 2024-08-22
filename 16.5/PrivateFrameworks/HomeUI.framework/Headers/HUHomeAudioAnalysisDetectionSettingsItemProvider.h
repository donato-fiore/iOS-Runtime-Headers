// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEAUDIOANALYSISDETECTIONSETTINGSITEMPROVIDER_H
#define HUHOMEAUDIOANALYSISDETECTIONSETTINGSITEMPROVIDER_H

@class HFItemProvider, HMHome, NSMutableSet;



@interface HUHomeAudioAnalysisDetectionSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSMutableSet *items; // ivar: _items


-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)reloadItems;


@end


#endif