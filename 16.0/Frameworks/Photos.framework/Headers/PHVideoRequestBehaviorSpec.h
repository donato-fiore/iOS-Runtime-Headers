// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHVIDEOREQUESTBEHAVIORSPEC_H
#define PHVIDEOREQUESTBEHAVIORSPEC_H

@class NSString;
@protocol PLVideoChoosingOptions, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PHVideoRequestBehaviorSpec : NSObject <PLVideoChoosingOptions, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger deliveryMode; // ivar: _deliveryMode
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger downloadIntent; // ivar: _downloadIntent
@property (nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL mediumHighQualityAllowed; // ivar: _mediumHighQualityAllowed
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice; // ivar: _restrictToPlayableOnCurrentDevice
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed; // ivar: _streamingAllowed
@property (nonatomic) NSInteger streamingVideoIntent; // ivar: _streamingVideoIntent
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (nonatomic) NSInteger version; // ivar: _version
@property (nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed; // ivar: _videoComplementAllowed


+(BOOL)supportsSecureCoding;
-(BOOL)hasValidTimeRange;
-(BOOL)isExplicitUserAction;
-(BOOL)streamingIntentAllowsFallbackToDownload;
-(NSInteger)videoDeliveryMode;
-(NSInteger)videoVersion;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif