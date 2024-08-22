// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKMLNETWORKV2_H
#define ABPKMLNETWORKV2_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ABPKMLNetworkV2 : NSObject {
    *e5rt_program_function _mainFunction;
    *e5rt_execution_stream _stream;
    *e5rt_program_library _library;
    BOOL _useSurface;
}


@property (readonly, nonatomic) NSMutableDictionary *inputBuffers; // ivar: _inputBuffers
@property (readonly, nonatomic) NSMutableDictionary *outputBuffers; // ivar: _outputBuffers


-(BOOL)changeNetWorkConfig:(id)arg0 ;
-(BOOL)execute;
-(id)initWithNetworkPath:(id)arg0 inputNames:(id)arg1 outputNames:(id)arg2 useSurface:(BOOL)arg3 ;
-(id)initWithNetworkPath:(id)arg0 networkConfig:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3 useSurface:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif