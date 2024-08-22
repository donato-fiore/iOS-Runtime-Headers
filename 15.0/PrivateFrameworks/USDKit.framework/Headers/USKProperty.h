// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USKPROPERTY_H
#define USKPROPERTY_H

@class NSString;


#import "USKObject.h"
#import "USKScene.h"
#import "USKNode.h"
#import "USKToken.h"

@interface USKProperty : USKObject {
    UsdProperty _property;
    USKScene *_sceneOwner;
    USKNode *_nodeOwner;
}


@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) USKToken *roleName;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) USKToken *typeName;


-(BOOL)boolValue;
-(BOOL)isAnimated;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setConnectionWithTargetPaths:(id)arg0 ;
-(BOOL)setCustomMetadata:(id)arg0 value:(id)arg1 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg0 dictionaryKey:(id)arg1 value:(id)arg2 ;
-(BOOL)setMetadataWithKey:(id)arg0 value:(id)arg1 ;
-(CGFloat)doubleValue;
-(CGFloat)doubleValueAtTime:(CGFloat)arg0 ;
-(NSUInteger)arraySize;
-(NSUInteger)arraySizeAtTime:(CGFloat)arg0 ;
-(NSUInteger)double2Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)double2Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)double3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)double3Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)double4Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)double4Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)double4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)double4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)doubleArray:(*CGFloat)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)doubleArray:(*CGFloat)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)float2Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)float2Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)float3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)float3Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)float4Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)float4Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)float4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)float4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)floatArray:(*float)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)floatArray:(*float)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)intArray:(*int)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)intArray:(*int)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)quatfArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)quatfArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)uintArray:(*unsigned int)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)uintArray:(*unsigned int)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(float)floatValue;
-(float)floatValueAtTime:(CGFloat)arg0 ;
-(id)connectedPropertyPath;
-(id)connectedPropertyPaths;
-(id)customMetadataWithKey:(id)arg0 ;
-(id)data;
-(id)dataAtTime:(CGFloat)arg0 ;
-(id)dictionaryMetadataWithKey:(id)arg0 dictionaryKey:(id)arg1 ;
-(id)double2Value;
-(id)double2ValueAtTime;
-(id)double3Value;
-(id)double3ValueAtTime;
-(id)double4Value;
-(id)double4ValueAtTime;
-(id)float2Value;
-(id)float2ValueAtTime;
-(id)float3Value;
-(id)float3ValueAtTime;
-(id)float4Value;
-(id)float4ValueAtTime;
-(id)initWithUsdProperty:(struct UsdProperty )arg0 ;
-(id)initWithUsdProperty:(struct UsdProperty )arg0 withNodeOwner:(id)arg1 ;
-(id)initWithUsdProperty:(struct UsdProperty )arg0 withSceneOwner:(id)arg1 ;
-(id)metadata;
-(id)metadataWithKey:(id)arg0 ;
-(id)name;
-(id)objectPath;
-(id)objectPathArray;
-(id)parentNode;
-(id)path;
-(id)resourcePath;
-(id)resourcePathArray;
-(id)stringArray;
-(id)stringArrayAtTime:(CGFloat)arg0 ;
-(id)stringValue;
-(id)targetObject;
-(id)timeCodeValue;
-(id)timeSamples;
-(id)tokenArray;
-(id)tokenArrayAtTime:(CGFloat)arg0 ;
-(id)tokenValue;
-(id)urlValue;
-(int)intValue;
-(struct ? )double4x4Value;
-(struct ? )double4x4ValueAtTime:(CGFloat)arg0 ;
-(struct ? )quatfValue;
-(struct ? )quatfValueAtTime:(CGFloat)arg0 ;
-(struct UsdProperty )usdProperty;
-(unsigned int)uintValue;
-(unsigned int)uintValueAtTime:(CGFloat)arg0 ;
-(void)clearConnections;
-(void)clearMetadata;
-(void)clearValue;
-(void)setBoolValue:(BOOL)arg0 ;
-(void)setData:(id)arg0 ;
-(void)setData:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)setDouble2Array:(*NSUInteger)arg0 count;
-(void)setDouble2Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;
-(void)setDouble2Value;
-(void)setDouble2Value:(CGFloat)arg0 atTime;
-(void)setDouble3Array:(*NSUInteger)arg0 count;
-(void)setDouble3Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;
-(void)setDouble3Value;
-(void)setDouble3Value:(CGFloat)arg0 atTime;
-(void)setDouble4Array:(*NSUInteger)arg0 count;
-(void)setDouble4Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;
-(void)setDouble4Value;
-(void)setDouble4Value:(CGFloat)arg0 atTime;
-(void)setDouble4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setDouble4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setDouble4x4Value:(struct ? )arg0 ;
-(void)setDouble4x4Value:(struct ? )arg0 atTime:(CGFloat)arg1 ;
-(void)setDoubleArray:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(void)setDoubleArray:(*CGFloat)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setDoubleValue:(CGFloat)arg0 ;
-(void)setDoubleValue:(CGFloat)arg0 atTime:(CGFloat)arg1 ;
-(void)setFloat2Array:(*NSUInteger)arg0 count;
-(void)setFloat2Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;
-(void)setFloat2Value;
-(void)setFloat2Value:(CGFloat)arg0 atTime;
-(void)setFloat3Array:(*NSUInteger)arg0 count;
-(void)setFloat3Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;
-(void)setFloat3Value;
-(void)setFloat3Value:(CGFloat)arg0 atTime;
-(void)setFloat4Array:(*NSUInteger)arg0 count;
-(void)setFloat4Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;
-(void)setFloat4Value;
-(void)setFloat4Value:(CGFloat)arg0 atTime;
-(void)setFloat4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setFloat4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setFloatArray:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)setFloatArray:(*float)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setFloatValue:(float)arg0 ;
-(void)setFloatValue:(float)arg0 atTime:(CGFloat)arg1 ;
-(void)setIntArray:(*int)arg0 count:(NSUInteger)arg1 ;
-(void)setIntArray:(*int)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setIntValue:(int)arg0 ;
-(void)setObjectPath:(id)arg0 ;
-(void)setObjectPathArray:(id)arg0 ;
-(void)setQuatfArray:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setQuatfArray:(struct ? *)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setQuatfValue:(struct ? )arg0 ;
-(void)setQuatfValue:(struct ? )arg0 atTime:(CGFloat)arg1 ;
-(void)setResourcePath:(id)arg0 ;
-(void)setResourcePathArray:(id)arg0 ;
-(void)setStringArray:(id)arg0 ;
-(void)setStringArray:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)setStringValue:(id)arg0 ;
-(void)setTimeCodeValue:(id)arg0 ;
-(void)setTokenArray:(id)arg0 ;
-(void)setTokenArray:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)setTokenValue:(id)arg0 ;
-(void)setUIntArray:(*unsigned int)arg0 count:(NSUInteger)arg1 ;
-(void)setUIntArray:(*unsigned int)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setUIntValue:(unsigned int)arg0 ;
-(void)setUIntValue:(unsigned int)arg0 atTime:(CGFloat)arg1 ;
-(void)setURL:(id)arg0 ;


@end


#endif