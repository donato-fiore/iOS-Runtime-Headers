// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUIDATAACCESSATTRIBUTION_H
#define STUIDATAACCESSATTRIBUTION_H

@class NSDate, STAttributedEntity, STActivityAttribution, STMediaStatusDomainCameraCaptureAttribution, NSString, STLocationStatusDomainLocationAttribution;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface STUIDataAccessAttribution : NSObject <BSDescriptionProviding, NSCopying>



@property (readonly, copy, nonatomic) NSDate *accessEndDate; // ivar: _accessEndDate
@property (readonly, copy, nonatomic) NSDate *accessStartDate; // ivar: _accessStartDate
@property (readonly, copy, nonatomic) STAttributedEntity *attributedEntity;
@property (readonly, copy, nonatomic) STActivityAttribution *audioRecordingActivityAttribution; // ivar: _audioRecordingActivityAttribution
@property (readonly, copy, nonatomic) STMediaStatusDomainCameraCaptureAttribution *cameraCaptureAttribution; // ivar: _cameraCaptureAttribution
@property (readonly, nonatomic) NSUInteger dataAccessType; // ivar: _dataAccessType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) STLocationStatusDomainLocationAttribution *locationAttribution; // ivar: _locationAttribution
@property (readonly, nonatomic, getter=isRecent) BOOL recent; // ivar: _recent
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAudioRecordingActivityAttribution:(id)arg0 recent:(BOOL)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithCameraCaptureAttribution:(id)arg0 recent:(BOOL)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithLocationAttribution:(id)arg0 recent:(BOOL)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif