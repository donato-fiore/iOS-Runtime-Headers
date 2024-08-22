// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONDESCRIPTOR_H
#define MTLFUNCTIONDESCRIPTOR_H

@class NSDictionary, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLFunctionConstantValues.h"

@interface MTLFunctionDescriptor : NSObject <NSCopying>

 {
    MTLFunctionDescriptorPrivate _private;
    NSUInteger _pipelineOptions;
    NSDictionary *_pluginData;
}


@property (copy, nonatomic) NSArray *binaryArchives;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSUInteger options;
@property (copy, nonatomic) NSString *specializedName;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)functionDescriptor;
-(BOOL)applyFunctionConstants;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)pipelineOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)pluginData;
-(struct ? )hashStableWithFunction:(id)arg0 ;
-(void)dealloc;
-(void)setApplyFunctionConstants:(BOOL)arg0 ;
-(void)setPipelineOptions:(NSUInteger)arg0 ;
-(void)setPluginData:(id)arg0 ;


@end


#endif