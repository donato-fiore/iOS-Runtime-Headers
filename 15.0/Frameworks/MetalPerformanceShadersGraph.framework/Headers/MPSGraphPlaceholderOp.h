// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHPLACEHOLDEROP_H
#define MPSGRAPHPLACEHOLDEROP_H

@class NSArray;


#import "MPSGraphOperation.h"

@interface MPSGraphPlaceholderOp : MPSGraphOperation

@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape


-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 shape:(id)arg1 dataType:(unsigned int)arg2 name:(id)arg3 ;
-(id)initWithGraph:(id)arg0 shape:(id)arg1 dataType:(unsigned int)arg2 value:(struct Value )arg3 name:(id)arg4 ;


@end


#endif