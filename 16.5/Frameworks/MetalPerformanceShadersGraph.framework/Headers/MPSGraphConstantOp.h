// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHCONSTANTOP_H
#define MPSGRAPHCONSTANTOP_H

@class NSData, NSArray;


#import "MPSGraphOperation.h"

@interface MPSGraphConstantOp : MPSGraphOperation {
    NSData *_data;
    BOOL _isSplat;
}


@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSArray *shape; // ivar: _shape


-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 data:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 isSplat:(BOOL)arg4 name:(id)arg5 ;


@end


#endif