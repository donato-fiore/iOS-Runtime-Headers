// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNMTLSHADABLEKEY_H
#define SCNMTLSHADABLEKEY_H


#import <Foundation/Foundation.h>

#import "SCNMTLRenderPipeline.h"

@interface SCNMTLShadableKey : NSObject {
    *__C3DMaterial _material;
    ? _geometry;
    SCNMTLRenderPipeline *_pipeline;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif