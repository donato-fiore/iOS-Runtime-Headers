// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUCOLORSAMPLERRESULT_H
#define _NUCOLORSAMPLERRESULT_H

@class NURenderResult, NSString;
@protocol NUColorSamplerResult, NURenderStatistics;



@interface _NUColorSamplerResult : NURenderResult <NUColorSamplerResult>



@property (retain, nonatomic) *CGColor color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? point; // ivar: _point
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif