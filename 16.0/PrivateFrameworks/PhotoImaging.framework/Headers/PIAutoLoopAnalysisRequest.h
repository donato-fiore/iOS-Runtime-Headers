// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIAUTOLOOPANALYSISREQUEST_H
#define PIAUTOLOOPANALYSISREQUEST_H

@class NURenderRequest;



@interface PIAutoLoopAnalysisRequest : NURenderRequest

@property (nonatomic) NSInteger flavor; // ivar: _flavor


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif