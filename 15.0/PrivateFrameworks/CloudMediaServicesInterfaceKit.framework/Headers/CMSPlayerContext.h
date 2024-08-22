// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSPLAYERCONTEXT_H
#define CMSPLAYERCONTEXT_H

@class NSString;
@protocol CMSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSPlayerContext : NSObject <CMSCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger offsetInMillis; // ivar: _offsetInMillis
@property (readonly, nonatomic) BOOL offsetIsValid;
@property (readonly, nonatomic) float playbackSpeed; // ivar: _playbackSpeed
@property (readonly, copy, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (readonly) Class superclass;


+(id)instanceFromCMSCoded:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualContext:(id)arg0 ;
-(id)cmsCoded;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForActivity:(id)arg0 queue:(id)arg1 content:(id)arg2 speed:(float)arg3 ;
-(id)initForActivity:(id)arg0 queue:(id)arg1 content:(id)arg2 speed:(float)arg3 offset:(NSInteger)arg4 ;
-(id)playerContextWithUpdatedOffset:(NSInteger)arg0 ;
-(id)playerContextWithUpdatedSpeed:(float)arg0 ;
-(id)playerContextWithUpdatedSpeed:(float)arg0 offset:(NSInteger)arg1 ;


@end


#endif