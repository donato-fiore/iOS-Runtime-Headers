// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEAUDIOANALYSISDETECTIONSETTINGSITEM_H
#define HUHOMEAUDIOANALYSISDETECTIONSETTINGSITEM_H

@class HFItem, HMHome;



@interface HUHomeAudioAnalysisDetectionSettingsItem : HFItem

@property (readonly, nonatomic) NSUInteger audioDetectionType; // ivar: _audioDetectionType
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)_localizedStringFromDetectionType:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithDetectionType:(NSUInteger)arg0 home:(id)arg1 ;


@end


#endif