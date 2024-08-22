// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUCLASSIFYPIPELINEIMAGECORRECTIONREQUEST_H
#define NUCLASSIFYPIPELINEIMAGECORRECTIONREQUEST_H

@class NSString;
@protocol NUTimeBased, NUScalePolicy;


#import "NURenderRequest.h"

@interface NUClassifyPipelineImageCorrectionRequest : NURenderRequest <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
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