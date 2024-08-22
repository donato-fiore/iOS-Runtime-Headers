// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUSTACKLOGCONSOLIDATOR_H
#define VMUSTACKLOGCONSOLIDATOR_H

@protocol VMUCommonGraphInterface, VMUStackLogReader;

#import <Foundation/Foundation.h>

#import "VMUDebugTimer.h"

@interface VMUStackLogConsolidator : NSObject {
    id<VMUCommonGraphInterface> *_scannerOrGraph;
    id<VMUStackLogReader> *_stackLogReader;
}


@property (retain, nonatomic) VMUDebugTimer *debugTimer; // ivar: _debugTimer


-(id)callTreeWithOptions:(NSUInteger)arg0 nodeFilter:(id)arg1 ;
-(id)initWithGraph:(id)arg0 stackLogReader:(id)arg1 ;
-(id)initWithScannerOrGraph:(id)arg0 stackLogReader:(id)arg1 ;
-(id)stackIDsToNodesFilteredBy:(id)arg0 ;


@end


#endif