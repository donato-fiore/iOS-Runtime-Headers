// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMULEAKDETECTOR_H
#define VMULEAKDETECTOR_H

@class NSMutableArray, NSMutableString;
@protocol VMUStackLogReader;

#import <Foundation/Foundation.h>

#import "VMUDebugTimer.h"
#import "VMUProcessObjectGraph.h"
#import "VMUTaskMemoryScanner.h"

@interface VMULeakDetector : NSObject {
    NSUInteger _max_contents_bytes;
    unsigned int _numExcluded;
}


@property (nonatomic) *void abandoned; // ivar: _abandoned
@property (nonatomic) BOOL checkAbandoned; // ivar: _checkAbandoned
@property (retain, nonatomic) VMUDebugTimer *debugTimer; // ivar: _debugTimer
@property (nonatomic) BOOL fcloseOutput; // ivar: _fcloseOutput
@property (nonatomic) BOOL fullStacks; // ivar: _fullStacks
@property (readonly, nonatomic) VMUProcessObjectGraph *graph; // ivar: _graph
@property (nonatomic) BOOL groupByType; // ivar: _groupByType
@property (retain, nonatomic) NSMutableArray *leakTreeRootsArray; // ivar: _leakTreeRootsArray
@property (retain, nonatomic) VMUProcessObjectGraph *leakedGraph; // ivar: _leakedGraph
@property (nonatomic) *void leakedNodes; // ivar: _leakedNodes
@property (nonatomic) unsigned int objectContentLevel; // ivar: _objectContentLevel
@property (nonatomic) *__sFILE outputFile; // ivar: _outputFile
@property (retain, nonatomic) NSMutableString *outputString; // ivar: _outputString
@property (nonatomic) BOOL referenceTreeShowRegionVirtualSize; // ivar: _referenceTreeShowRegionVirtualSize
@property (readonly, nonatomic) VMUTaskMemoryScanner *scanner; // ivar: _scanner
@property (nonatomic) BOOL showBinaryContents; // ivar: _showBinaryContents
@property (nonatomic) BOOL showContext; // ivar: _showContext
@property (nonatomic) BOOL showLeakedVMregions; // ivar: _showLeakedVMregions
@property (nonatomic) BOOL showListOfLeaks; // ivar: _showListOfLeaks
@property (nonatomic) BOOL showOnlyVMregions; // ivar: _showOnlyVMregions
@property (nonatomic) BOOL showRawClassNames; // ivar: _showRawClassNames
@property (readonly, nonatomic) NSObject<VMUStackLogReader> *stackLogReader; // ivar: _stackLogReader
@property (nonatomic) BOOL suppressOutput; // ivar: _suppressOutput
@property (readonly, nonatomic) unsigned int task; // ivar: _task


+(id)referenceDescription:(struct ? )arg0 dstDescription:(id)arg1 is64bit:(BOOL)arg2 ;
-(BOOL)checkTaskExistence;
-(id)initWithTask:(unsigned int)arg0 graph:(id)arg1 scanner:(id)arg2 stackLogReader:(id)arg3 ;
-(id)labelForNode:(unsigned int)arg0 details:(struct ? )arg1 shortLabel:(BOOL)arg2 ;
-(id)nodeDescription:(unsigned int)arg0 ;
-(id)nodeDescription:(unsigned int)arg0 usingDetails:(struct ? *)arg1 ;
-(id)nodeTypeDescription:(unsigned int)arg0 details:(struct ? *)arg1 mallocBySize:(BOOL)arg2 ;
-(id)referenceDescription:(struct ? )arg0 dstDescription:(id)arg1 is64bit:(BOOL)arg2 ;
-(unsigned int)doNormalLeakDetectionWithError:(*id)arg0 ;
-(void)buildLeakTree;
-(void)dealloc;
-(void)printContents:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)printLeak:(char *)arg0 node:(unsigned int)arg1 details:(struct ? )arg2 region:(id)arg3 stop:(*BOOL)arg4 ;
-(void)printLeakTree;
-(void)printout:(char *)arg0 ;


@end


#endif