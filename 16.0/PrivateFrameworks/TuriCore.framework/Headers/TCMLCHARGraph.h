// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMLCHARGRAPH_H
#define TCMLCHARGRAPH_H


#import <Foundation/Foundation.h>


@interface TCMLCHARGraph : NSObject



+(id)defineGraphConv:(id)arg0 input:(id)arg1 graph:(id)arg2 descriptor:(id)arg3 weights:(id)arg4 ;
+(id)defineResidual:(id)arg0 input:(id)arg1 graph:(id)arg2 descriptor:(id)arg3 weights:(id)arg4 ;
+(id)defineSTGCN:(id)arg0 input:(id)arg1 graph:(id)arg2 descriptor:(id)arg3 weights:(id)arg4 ;
+(id)defineSTGCNAction:(id)arg0 input:(id)arg1 graph:(id)arg2 descriptor:(id)arg3 weights:(id)arg4 ;
+(id)defineTemporalConvolutionalNetwork:(id)arg0 input:(id)arg1 graph:(id)arg2 descriptor:(id)arg3 weights:(id)arg4 ;


@end


#endif