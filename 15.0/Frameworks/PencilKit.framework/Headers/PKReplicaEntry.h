// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREPLICAENTRY_H
#define PKREPLICAENTRY_H

@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "PKDrawingConcrete.h"

@interface PKReplicaEntry : NSObject <NSCoding>



@property (nonatomic) unsigned int clock; // ivar: _clock
@property (nonatomic) PKDrawingConcrete *drawing; // ivar: _drawing
@property (nonatomic) BOOL inUse; // ivar: _inUse
@property (nonatomic) unsigned int replicaUUIDIndex; // ivar: _replicaUUIDIndex
@property (nonatomic) unsigned int subclock; // ivar: _subclock


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReplicaUUIDIndex:(unsigned int)arg0 clock:(unsigned int)arg1 subclock:(unsigned int)arg2 inUse:(BOOL)arg3 forDrawing:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif