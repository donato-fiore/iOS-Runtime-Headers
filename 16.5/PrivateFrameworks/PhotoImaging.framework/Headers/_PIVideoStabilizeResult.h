// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIVIDEOSTABILIZERESULT_H
#define _PIVIDEOSTABILIZERESULT_H

@class NURenderResult, NSString, NSArray, NSDictionary;
@protocol PIVideoStabilizeResult, NURenderStatistics;



@interface _PIVideoStabilizeResult : NURenderResult <PIVideoStabilizeResult>



@property (readonly, nonatomic) NSUInteger analysisType; // ivar: _analysisType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *keyframes; // ivar: _keyframes
@property (readonly, nonatomic) NSDictionary *rawHomographies; // ivar: _rawHomographies
@property (readonly, nonatomic) ? stabCropRect; // ivar: _stabCropRect
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;


-(id)initWithKeyframes:(id)arg0 stabCropRect:(struct ? )arg1 analysisType:(NSUInteger)arg2 rawHomographies:(id)arg3 ;


@end


#endif