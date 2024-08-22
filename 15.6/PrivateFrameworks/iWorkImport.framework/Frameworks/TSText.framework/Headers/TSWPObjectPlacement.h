// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPOBJECTPLACEMENT_H
#define TSWPOBJECTPLACEMENT_H

@class TSUUUIDPath;

#import <Foundation/Foundation.h>


@interface TSWPObjectPlacement : NSObject

@property (nonatomic) int index; // ivar: _index
@property (retain, nonatomic) NSObject *object; // ivar: _object
@property (retain, nonatomic) TSUUUIDPath *uuidPath; // ivar: _uuidPath


+(id)objectPlacementWithObject:(id)arg0 uuidPath:(id)arg1 index:(int)arg2 ;
-(id)initWithObject:(id)arg0 uuidPath:(id)arg1 index:(int)arg2 ;


@end


#endif