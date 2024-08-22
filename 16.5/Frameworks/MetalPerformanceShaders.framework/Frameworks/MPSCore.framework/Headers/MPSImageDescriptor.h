// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSIMAGEDESCRIPTOR_H
#define MPSIMAGEDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSImageDescriptor : NSObject <NSCopying>

 {
    NSUInteger _cacheMode;
    NSUInteger _featureChannelFormat;
}


@property (nonatomic) NSUInteger channelFormat; // ivar: _channelFormat
@property (nonatomic) NSUInteger cpuCacheMode; // ivar: _cpuCacheMode
@property (nonatomic) NSUInteger featureChannels; // ivar: _featureChannels
@property (nonatomic) NSUInteger featureChannelsLayout; // ivar: _featureChannelsLayout
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) NSUInteger numberOfImages; // ivar: _numberOfImages
@property (readonly, nonatomic) NSUInteger pixelFormat;
@property (nonatomic) NSUInteger storageMode; // ivar: _storageMode
@property (nonatomic) NSUInteger usage; // ivar: _usage
@property (nonatomic) NSUInteger width; // ivar: _width


+(id)imageDescriptorWithChannelFormat:(NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 featureChannels:(NSUInteger)arg3 ;
+(id)imageDescriptorWithChannelFormat:(NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 featureChannels:(NSUInteger)arg3 numberOfImages:(NSUInteger)arg4 usage:(NSUInteger)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)init;
-(id)newTextureDescriptor;


@end


#endif