// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMPIPELINEANALYTICSEVENT_H
#define PMPIPELINEANALYTICSEVENT_H

@class NSString;
@protocol CoreAnalyticsEventProtocol;


#import "PMCoreAnalyticsEvent.h"

@interface PMPipelineAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>



@property (nonatomic) NSInteger assetCountAchieved; // ivar: _assetCountAchieved
@property (nonatomic) NSInteger assetCountRequested; // ivar: _assetCountRequested
@property (copy, nonatomic) NSString *collectionClass; // ivar: _collectionClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat durationAchieved; // ivar: _durationAchieved
@property (nonatomic) NSString *durationRequested; // ivar: _durationRequested
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger moodID; // ivar: _moodID
@property (copy, nonatomic) NSString *songID; // ivar: _songID
@property (readonly) Class superclass;
@property (nonatomic) NSInteger unsuccessfulDownloadCount; // ivar: _unsuccessfulDownloadCount


-(id)copy;
-(id)eventBySettingAssetCountAchieved:(NSInteger)arg0 ;
-(id)eventBySettingAssetCountRequested:(NSInteger)arg0 ;
-(id)eventBySettingCollectionClass:(id)arg0 ;
-(id)eventBySettingDurationAchieved:(CGFloat)arg0 ;
-(id)eventBySettingDurationRequested:(id)arg0 ;
-(id)eventBySettingMoodID:(NSInteger)arg0 ;
-(id)eventBySettingSongID:(id)arg0 ;
-(id)eventBySettingUnsuccessfulDownloadCount:(NSInteger)arg0 ;
-(id)eventName;
-(id)eventPayload;
-(id)init;


@end


#endif