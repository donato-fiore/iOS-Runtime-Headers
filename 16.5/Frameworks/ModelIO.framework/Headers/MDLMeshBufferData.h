// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLMESHBUFFERDATA_H
#define MDLMESHBUFFERDATA_H

@class NSMutableData, NSString, NSData;
@protocol MDLMeshBuffer, MDLMeshBufferAllocator, MDLMeshBufferZone;

#import <Foundation/Foundation.h>

#import "MDLMeshBufferZoneDefault.h"

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer>

 {
    MDLMeshBufferZoneDefault *_zone;
    MDLMeshBufferZoneDefault *_zoneDefault;
    NSMutableData *_data;
    NSUInteger _length;
    id<MDLMeshBufferAllocator> *_allocator;
    NSUInteger _type;
    NSString *_name;
}


@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator;
@property (readonly, retain, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferZone> *zone;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLength:(NSUInteger)arg0 data:(id)arg1 allocator:(id)arg2 zone:(id)arg3 ;
-(id)initWithType:(NSUInteger)arg0 data:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 length:(NSUInteger)arg1 ;
-(id)map;
-(id)name;
-(void)dealloc;
-(void)fillData:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setName:(id)arg0 ;


@end


#endif