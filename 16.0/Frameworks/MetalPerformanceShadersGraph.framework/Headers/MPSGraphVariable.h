// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHVARIABLE_H
#define MPSGRAPHVARIABLE_H

@class NSData, NSMutableArray, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphVariable : NSObject <NSCopying>

 {
    NSData *_data;
    NSMutableArray *_mpsndarrays;
}


@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, copy, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) Value value; // ivar: _value


+(id)newVariableWithData:(id)arg0 dataType:(unsigned int)arg1 shape:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initVariableWithData:(id)arg0 dataType:(unsigned int)arg1 shape:(id)arg2 ;
-(id)initVariableWithData:(id)arg0 value:(struct Value )arg1 ;
-(id)initVariableWithMPSNDArray:(id)arg0 value:(struct Value )arg1 ;
-(id)mpsNDArrayWithDevice:(id)arg0 ;


@end


#endif