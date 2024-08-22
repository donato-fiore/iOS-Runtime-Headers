// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUVISIONDETECTIONREQUEST_H
#define NUVISIONDETECTIONREQUEST_H

@class NSString, NSArray;
@protocol NUTimeBased, NUScalePolicy;


#import "NURenderRequest.h"

@interface NUVisionDetectionRequest : NURenderRequest <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy
@property (readonly) Class superclass;
@property (nonatomic) ? time;
@property (copy, nonatomic) NSArray *visionRequests; // ivar: _visionRequests


+(void)warmUpRequests:(id)arg0 ;
-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(id)submitGenericSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif