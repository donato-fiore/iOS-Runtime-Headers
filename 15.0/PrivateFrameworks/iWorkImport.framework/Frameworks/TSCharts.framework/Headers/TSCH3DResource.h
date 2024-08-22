// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DRESOURCE_H
#define TSCH3DRESOURCE_H

@class NSString;
@protocol NSCopying, TSCH3DObjectStateResource;

#import <Foundation/Foundation.h>

#import "TSCH3DDataBuffer.h"

@interface TSCH3DResource : NSObject <NSCopying, TSCH3DObjectStateResource>

 {
    TSCH3DDataBuffer *_cache;
    BOOL _changed;
    BOOL _cached;
    DataBufferInfo _dataBufferInfo;
}


@property (readonly, nonatomic) TSCH3DDataBuffer *buffer;
@property (readonly, nonatomic) DataBufferInfo bufferInfo;
@property (nonatomic) int caching; // ivar: _caching
@property (nonatomic) BOOL changed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTexturable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) int update; // ivar: _update


+(id)resource;
+(id)resourceWithCaching:(int)arg0 ;
-(BOOL)cacheNeedsUpdate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCaching:(int)arg0 ;
-(void)dealloc;
-(void)flushMemory;
-(void)setCache:(id)arg0 ;
-(void)updateBufferInfoFromBuffer:(id)arg0 ;


@end


#endif