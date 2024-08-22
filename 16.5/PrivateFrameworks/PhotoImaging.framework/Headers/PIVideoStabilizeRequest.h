// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIVIDEOSTABILIZEREQUEST_H
#define PIVIDEOSTABILIZEREQUEST_H

@class NURenderRequest;



@interface PIVideoStabilizeRequest : NURenderRequest

@property (nonatomic) NSUInteger allowedAnalysisTypes; // ivar: _allowedAnalysisTypes
@property (nonatomic) CGFloat allowedCropFraction; // ivar: _allowedCropFraction
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


+(BOOL)canPerformGyroBasedStabilizationForAsset:(id)arg0 ;
-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif