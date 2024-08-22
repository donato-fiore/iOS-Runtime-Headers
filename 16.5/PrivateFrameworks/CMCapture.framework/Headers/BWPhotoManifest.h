// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPHOTOMANIFEST_H
#define BWPHOTOMANIFEST_H

@class NSMutableDictionary, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BWPhotoManifest : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _bufferPtrValueToPhotoDescriptorLock;
    NSMutableDictionary *_bufferPtrValueToPhotoDescriptor;
}


@property (readonly, nonatomic) NSString *captureRequestIdentifier; // ivar: _captureRequestIdentifier
@property (readonly, nonatomic) NSArray *photoDescriptors; // ivar: _photoDescriptors


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)descriptorForIdentifier:(id)arg0 ;
-(id)descriptorForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptors:(id)arg0 captureRequestIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif