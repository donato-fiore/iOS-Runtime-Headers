// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPHOTOMANIFEST_H
#define BWPHOTOMANIFEST_H

@class NSMutableDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BWPhotoManifest : NSObject {
    os_unfair_lock_s _bufferPtrValueToPhotoDescriptorLock;
    NSMutableDictionary *_bufferPtrValueToPhotoDescriptor;
}


@property (readonly, nonatomic) NSString *captureRequestIdentifier; // ivar: _captureRequestIdentifier
@property (readonly, nonatomic) NSArray *photoDescriptors; // ivar: _photoDescriptors


-(id)description;
-(id)descriptorForIdentifier:(id)arg0 ;
-(id)descriptorForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithDescriptors:(id)arg0 captureRequestIdentifier:(id)arg1 ;
-(void)dealloc;


@end


#endif