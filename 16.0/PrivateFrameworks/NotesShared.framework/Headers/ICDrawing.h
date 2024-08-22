// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDRAWING_H
#define ICDRAWING_H

@class NSMutableOrderedSet, NSOrderedSet, NSDate, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TTVectorMultiTimestamp.h"

@interface ICDrawing : NSObject <NSCopying>

 {
    NSMutableOrderedSet *_visibleCommands;
    NSInteger _orientation;
    CGRect _commandBounds;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) BOOL canChangeTransientOrientation;
@property (readonly, nonatomic) NSOrderedSet *commands; // ivar: _commands
@property (readonly, nonatomic) CGRect fullBounds;
@property (readonly, nonatomic) NSInteger imageOrientation;
@property (nonatomic) NSInteger orientation;
@property (retain, nonatomic) NSDate *orientationTimestamp; // ivar: _orientationTimestamp
@property (readonly, nonatomic) NSUUID *replicaUUID; // ivar: _replicaUUID
@property (retain, nonatomic) TTVectorMultiTimestamp *timestamp; // ivar: _timestamp
@property (nonatomic) CGRect unrotatedBoundsInCommandSpace; // ivar: _unrotatedBoundsInCommandSpace
@property (nonatomic) CGSize unrotatedSize; // ivar: _unrotatedSize
@property (readonly, nonatomic) NSOrderedSet *visibleCommands;


+(struct CGAffineTransform )defaultSizeOrientationTransform:(NSInteger)arg0 ;
+(struct CGAffineTransform )orientationTransform:(NSInteger)arg0 size:(struct CGSize )arg1 ;
+(struct CGSize )defaultPixelSize;
+(struct CGSize )defaultSize;
+(struct CGSize )fullSize:(struct CGSize )arg0 forOrientation:(NSInteger)arg1 ;
+(void)sortCommands:(id)arg0 ;
-(BOOL)setTransientOrientation:(NSInteger)arg0 ;
-(NSUInteger)mergeWithDrawing:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 version:(unsigned int)arg1 replicaID:(id)arg2 ;
-(id)initWithCommands:(id)arg0 fromDrawing:(id)arg1 ;
-(id)initWithData:(id)arg0 replicaID:(id)arg1 ;
-(id)initWithData:(id)arg0 version:(unsigned int)arg1 replicaID:(id)arg2 ;
-(id)initWithDrawing:(id)arg0 ;
-(id)initWithReplicaID:(id)arg0 ;
-(id)insertNewTestCommand;
-(id)mutableCommands;
-(id)serializeWithPathData:(BOOL)arg0 ;
-(id)serializeWithPathData:(BOOL)arg0 toVersion:(*unsigned int)arg1 ;
-(id)setCommand:(id)arg0 hidden:(BOOL)arg1 ;
-(id)visibleCommandForInsertingCommand:(id)arg0 ;
-(struct CGRect )calculateCommandBounds;
-(struct CGRect )commandBounds;
-(struct CGSize )fullSize;
-(struct ICDrawingCommandID )commandIDForNewCommand;
-(unsigned int)saveToArchive:(*void)arg0 withPathData:(BOOL)arg1 ;
-(void)addNewCommand:(id)arg0 ;
-(void)invalidateBounds;
-(void)setCommandIDForInsertion:(id)arg0 ;
-(void)sortCommands;
-(void)takeOrientationFrom:(id)arg0 ;


@end


#endif