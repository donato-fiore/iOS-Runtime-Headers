// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APREPRESENTATIONDATA_H
#define APREPRESENTATIONDATA_H

@class NSString, NSError, NSUUID, NSDictionary, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "APTapAction.h"

@interface APRepresentationData : NSObject <NSSecureCoding>



@property (retain) NSString *adTag; // ivar: _adTag
@property (retain) NSString *adamID; // ivar: _adamID
@property (retain) NSString *advertiserName; // ivar: _advertiserName
@property (retain) NSString *articleID; // ivar: _articleID
@property (retain) NSString *articleTitle; // ivar: _articleTitle
@property CGFloat bitrate; // ivar: _bitrate
@property (retain) NSString *campaignData; // ivar: _campaignData
@property (retain) NSString *clientRequestID; // ivar: _clientRequestID
@property NSInteger connectionType; // ivar: _connectionType
@property (retain) NSString *contentDataIdentifier; // ivar: _contentDataIdentifier
@property NSInteger desiredPosition; // ivar: _desiredPosition
@property CGFloat duration; // ivar: _duration
@property (retain) NSError *error; // ivar: _error
@property (retain) NSUUID *iAdID; // ivar: _iAdID
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (retain) NSUUID *impressionID; // ivar: _impressionID
@property (retain) NSDictionary *installAttribution; // ivar: _installAttribution
@property (retain) NSString *journeyRelayAdGroupId; // ivar: _journeyRelayAdGroupId
@property (retain) NSString *journeyRelayCampaignId; // ivar: _journeyRelayCampaignId
@property (retain) NSString *metadata; // ivar: _metadata
@property BOOL parentAppCheckEnabled; // ivar: _parentAppCheckEnabled
@property NSInteger placementType; // ivar: _placementType
@property NSUInteger privacyMarkerPosition; // ivar: _privacyMarkerPosition
@property NSInteger rank; // ivar: _rank
@property NSUInteger signalStrength; // ivar: _signalStrength
@property ? size; // ivar: _size
@property BOOL skipEnabled; // ivar: _skipEnabled
@property CGFloat skipThreshold; // ivar: _skipThreshold
@property (retain) NSString *storeFront; // ivar: _storeFront
@property (retain) NSString *storeFrontLocale; // ivar: _storeFrontLocale
@property (retain) APTapAction *tapAction; // ivar: _tapAction
@property NSInteger timeToDisplay; // ivar: _timeToDisplay
@property BOOL unbranded; // ivar: _unbranded
@property (retain) NSURL *videoURL; // ivar: _videoURL


+(BOOL)supportsSecureCoding;
+(id)mockRepresentationWithType:(NSInteger)arg0 contentData:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_correctNonNullableFields;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif