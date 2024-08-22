// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUFACEDETECTIONREQUEST_H
#define NUFACEDETECTIONREQUEST_H

@class NSString;
@protocol NUTimeBased, NUScalePolicy;


#import "NURenderRequest.h"

@interface NUFaceDetectionRequest : NURenderRequest <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger maxFaceCount; // ivar: _maxFaceCount
@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif