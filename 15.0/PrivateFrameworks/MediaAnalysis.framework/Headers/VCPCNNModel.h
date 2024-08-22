// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNMODEL_H
#define VCPCNNMODEL_H


#import <Foundation/Foundation.h>

#import "VCPCNNMetalContext.h"
#import "VCPCNNData.h"

@interface VCPCNNModel : NSObject {
    VCPCNNBlock" _blocks;
    short _quantFactor;
    BOOL _useGPU;
    VCPCNNMetalContext *_context;
}


@property (readonly) VCPCNNData *output; // ivar: _output


-(id)getGPUContext;
-(id)init;
-(id)initWithParameters:(short)arg0 useGPU:(BOOL)arg1 ;
-(int)add:(id)arg0 ;
-(int)dynamicForward:(id)arg0 paramFileUrl:(id)arg1 cancel:(id)arg2 ;
-(int)forward:(id)arg0 ;
-(int)prepareNetworkFromURL:(id)arg0 withInputSize:(id)arg1 ;
-(int)size;


@end


#endif