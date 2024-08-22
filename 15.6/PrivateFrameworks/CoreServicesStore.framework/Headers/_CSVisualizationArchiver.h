// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CSVISUALIZATIONARCHIVER_H
#define _CSVISUALIZATIONARCHIVER_H

@class NSPredicate;

#import <Foundation/Foundation.h>

#import "_CSVisualizer.h"

@interface _CSVisualizationArchiver : NSObject {
    *__sFILE _fileHandle;
    BOOL _closeWhenDone;
    BOOL _outputAsXML;
    atomic<bool> _hadEPIPE;
    os_unfair_lock_s _dictWriteLock;
    NSUInteger _stats;
}


@property (retain, nonatomic) NSPredicate *unitDescriptionPredicate; // ivar: _unitDescriptionPredicate
@property (readonly) _CSVisualizer *visualizer; // ivar: _visualizer


+(void)beginProvidingVisualizationArchivesWithMachServiceName:(id)arg0 queue:(id)arg1 creatingVisualizersWithBlock:(id)arg2 ;
+(void)processCommandFromConnection:(*void)arg0 fileHandle:(struct __sFILE *)arg1 providerBlock:(id)arg2 ;
+(void)provideVisualizerToConnection:(*void)arg0 fileHandle:(struct __sFILE *)arg1 providerBlock:(id)arg2 ;
-(BOOL)fwrite:(*void)arg0 size:(NSUInteger)arg1 numberOfItems:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)writeDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeMetadata:(id)arg0 forStore:(struct __CSStore *)arg1 error:(*id)arg2 ;
-(id)initWithVisualizer:(id)arg0 fileHandle:(struct __sFILE *)arg1 closeWhenDone:(BOOL)arg2 allowCompression:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithVisualizer:(id)arg0 fileHandle:(struct __sFILE *)arg1 closeWhenDone:(BOOL)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)finishWriting;
-(void)getWriteUnitState:(struct _CSWriteUnitState *)arg0 forTable:(unsigned int)arg1 ;
-(void)writeAllUnitsInTable:(unsigned int)arg0 block:(id)arg1 ;
-(void)writeAllUnitsWithBlock:(id)arg0 ;
-(void)writeUnit:(unsigned int)arg0 inTable:(unsigned int)arg1 ;
-(void)writeUnit:(unsigned int)arg0 inTable:(unsigned int)arg1 state:(struct _CSWriteUnitState *)arg2 ;


@end


#endif