// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCACHEFRAGHANDLER_H
#define QLCACHEFRAGHANDLER_H

@class NSArray, NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "_QLCacheThread.h"

@interface QLCacheFragHandler : NSObject {
    NSUInteger _totalLen;
    NSUInteger _holesLen;
    NSArray *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    BOOL _isDirty;
    BOOL _needsCompact;
}


@property (weak) _QLCacheThread *cacheThread; // ivar: _cacheThread


+(void)initialize;
-(BOOL)canFindHoleForLen:(NSUInteger)arg0 ;
-(BOOL)checkConsistency;
-(BOOL)checkHolesLenConsistency;
-(BOOL)isDirty;
-(BOOL)save;
-(NSUInteger)allocateSpaceForLength:(NSUInteger)arg0 added:(*BOOL)arg1 ;
-(NSUInteger)totalLen;
-(float)frag;
-(id)dataToSave;
-(id)initWithCacheThread:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 cacheThread:(id)arg1 ;
-(id)initWithFilePath:(id)arg0 cacheThread:(id)arg1 ;
-(id)initWithHolePositions:(id)arg0 holeLengths:(id)arg1 totalLength:(NSInteger)arg2 holesLength:(NSInteger)arg3 cacheThread:(id)arg4 ;
-(id)lastHole;
-(id)orderedByStart;
-(void)_insertHoleInRanks:(id)arg0 ;
-(void)_removeHoleFromRanks:(id)arg0 ;
-(void)assertSpaceIsRetainedAtPos:(NSUInteger)arg0 withLen:(NSUInteger)arg1 ;
-(void)clear;
-(void)compact;
-(void)releaseSpaceAtPos:(NSUInteger)arg0 withLen:(NSUInteger)arg1 ;
-(void)truncateFromPosition:(NSUInteger)arg0 ;
-(void)truncateUselessSpaceAtEndOfFile;


@end


#endif