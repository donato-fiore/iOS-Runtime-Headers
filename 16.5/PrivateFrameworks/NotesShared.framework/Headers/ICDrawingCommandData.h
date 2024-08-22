// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDRAWINGCOMMANDDATA_H
#define ICDRAWINGCOMMANDDATA_H


#import <Foundation/Foundation.h>


@interface ICDrawingCommandData : NSObject {
    CGRect _cachedBounds;
}


@property (nonatomic) ? baseValues; // ivar: _baseValues
@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGPoint clipNormal; // ivar: _clipNormal
@property (nonatomic) CGPoint clipOrigin; // ivar: _clipOrigin
@property (retain, nonatomic) *CGColor color; // ivar: _color
@property (nonatomic) ICDrawingCommandID commandID; // ivar: _commandID
@property BOOL isClipped; // ivar: _isClipped
@property (nonatomic) ? parameters; // ivar: _parameters
@property (readonly, nonatomic) *void points; // ivar: _points
@property (readonly, nonatomic) unsigned int randomSeed;
@property (nonatomic) unsigned int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualDrawingCommandData:(id)arg0 ;
-(CGFloat)renderCost;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 version:(unsigned int)arg1 sortedUUIDs:(id)arg2 ;
-(struct ? )readPointFromArchive:(*void)arg0 deltaFrom:(struct ? *)arg1 ;
-(struct ? )version1Parameters;
-(unsigned int)savePoint:(struct ? *)arg0 deltaFrom:(struct ? *)arg1 toArchive:(*void)arg2 ;
-(unsigned int)saveToArchive:(*void)arg0 sortedUUIDs:(id)arg1 withPathData:(BOOL)arg2 isHidden:(BOOL)arg3 ;
-(void)dealloc;
-(void)invalidateBounds;


@end


#endif