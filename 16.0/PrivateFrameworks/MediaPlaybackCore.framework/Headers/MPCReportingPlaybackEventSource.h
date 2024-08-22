// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCREPORTINGPLAYBACKEVENTSOURCE_H
#define MPCREPORTINGPLAYBACKEVENTSOURCE_H

@class NSString, MPModelGenericObject, NSData, MPModelPlayEvent, NSNumber;
@protocol MPCReportingIdentityPropertiesLoading;

#import <Foundation/Foundation.h>


@interface MPCReportingPlaybackEventSource : NSObject

@property (nonatomic) NSInteger equivalencySourceAdamID; // ivar: _equivalencySourceAdamID
@property (nonatomic) CGFloat eventDuration; // ivar: _eventDuration
@property (copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (retain, nonatomic) NSObject<MPCReportingIdentityPropertiesLoading> *identityPropertiesLoader; // ivar: _identityPropertiesLoader
@property (retain, nonatomic) MPModelGenericObject *itemGenericObject; // ivar: _itemGenericObject
@property (copy, nonatomic) NSData *jingleTimedMetadata; // ivar: _jingleTimedMetadata
@property (copy, nonatomic) NSString *lyricsID; // ivar: _lyricsID
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent; // ivar: _modelPlayEvent
@property (nonatomic) NSUInteger overrideItemType; // ivar: _overrideItemType
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // ivar: _privateListeningEnabled
@property (copy, nonatomic) NSData *recommendationData; // ivar: _recommendationData
@property (copy, nonatomic) NSString *requestingBundleIdentifier; // ivar: _requestingBundleIdentifier
@property (copy, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion
@property (nonatomic) BOOL shouldReportPlayEventsToStore; // ivar: _shouldReportPlayEventsToStore
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // ivar: _siriInitiated
@property (copy, nonatomic) NSData *trackInfo; // ivar: _trackInfo


-(id)init;


@end


#endif