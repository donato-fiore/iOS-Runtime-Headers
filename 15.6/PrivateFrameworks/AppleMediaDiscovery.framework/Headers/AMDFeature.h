// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDFEATURE_H
#define AMDFEATURE_H

@class NSMutableArray, NSArray;
@protocol PostRemapOperation;

#import <Foundation/Foundation.h>


@interface AMDFeature : NSObject

@property (retain, nonatomic) NSMutableArray *_actualShape; // ivar: __actualShape
@property (nonatomic) NSInteger _dataType; // ivar: __dataType
@property (retain, nonatomic) NSObject<PostRemapOperation> *_postRemapOperation; // ivar: __postRemapOperation
@property (retain, nonatomic) id *_remapInfo; // ivar: __remapInfo
@property (retain, nonatomic) NSArray *_shape; // ivar: __shape
@property (retain, nonatomic) id *_value; // ivar: __value


+(BOOL)getDoubleFromObject:(id)arg0 copyToValue:(*CGFloat)arg1 withRemapDictionary:(id)arg2 andPostRemapOperation:(id)arg3 ;
+(BOOL)getFloatFromObject:(id)arg0 copyToValue:(*float)arg1 withRemapDictionary:(id)arg2 andPostRemapOperation:(id)arg3 ;
+(BOOL)getIntFromObject:(id)arg0 copyToValue:(*int)arg1 withRemapDictionary:(id)arg2 andPostRemapOperation:(id)arg3 ;
+(id)featureFromValue:(id)arg0 ;
+(void)copyDoubleValues:(int)arg0 fromArray:(id)arg1 toBuffer:(*CGFloat)arg2 withDefaultValue:(CGFloat)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
+(void)copyFloat32Values:(int)arg0 fromArray:(id)arg1 toBuffer:(*float)arg2 withDefaultValue:(float)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
+(void)copyInt32Values:(int)arg0 fromArray:(id)arg1 toBuffer:(*int)arg2 withDefaultValue:(int)arg3 withRemapData:(id)arg4 andPostRemapOperation:(id)arg5 ;
+(void)copyInt32Values:(int)arg0 fromArray:(id)arg1 toBuffer:(*int)arg2 withDefaultValue:(int)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
+(void)copyInt32Values:(int)arg0 fromArray:(id)arg1 toBuffer:(*int)arg2 withDefaultValue:(int)arg3 withRemapInfo:(id)arg4 andPostRemapOperation:(id)arg5 ;
-(NSInteger)getDataType;
-(NSUInteger)getCount;
-(id)getPostRemapOperation;
-(id)getRemapInfo;
-(id)getShape;
-(id)getValue;
-(id)initWithValue:(id)arg0 ;
-(id)stringValue;
-(void)copyDoubleValues:(int)arg0 toBuffer:(*CGFloat)arg1 withDefaultValue:(CGFloat)arg2 withMapOp:(id)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
-(void)copyFloat32Values:(int)arg0 toBuffer:(*float)arg1 withDefaultValue:(float)arg2 withMapOp:(id)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
-(void)copyInt32Values:(int)arg0 toBuffer:(*int)arg1 withDefaultValue:(int)arg2 withMapOp:(id)arg3 withRemapDictionary:(id)arg4 andPostRemapOperation:(id)arg5 ;
-(void)copyInt32Values:(int)arg0 toBuffer:(*int)arg1 withDefaultValue:(int)arg2 withMapOp:(id)arg3 withRemapInfo:(id)arg4 andPostRemapOperation:(id)arg5 ;
-(void)setDataType:(NSInteger)arg0 ;
-(void)setPostRemapOperation:(id)arg0 ;
-(void)setRemapInfo:(id)arg0 ;
-(void)setShape:(id)arg0 ;


@end


#endif