// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDRAWINGCOMMAND_H
#define ICDRAWINGCOMMAND_H


#import <Foundation/Foundation.h>

#import "ICDrawingCommandData.h"

@interface ICDrawingCommand : NSObject

@property (readonly, nonatomic) ICDrawingCommandData *data; // ivar: _data
@property (readonly, nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) TopoID timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualDrawingCommand:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithArchive:(*void)arg0 version:(unsigned int)arg1 sortedUUIDs:(id)arg2 ;
-(id)initWithCommand:(id)arg0 hidden:(BOOL)arg1 timestamp:(struct TopoID )arg2 ;
-(unsigned int)saveToArchive:(*void)arg0 sortedUUIDs:(id)arg1 withPathData:(BOOL)arg2 ;


@end


#endif