// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INIMAGESERVICEREGISTRY_H
#define INIMAGESERVICEREGISTRY_H

@class NSMutableDictionary, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface INImageServiceRegistry : NSObject {
    NSMutableDictionary *_imageServicesByServiceIdentifier;
    NSMutableArray *_prioritySortedImageServices;
    NSObject<OS_dispatch_queue> *_registryQueue;
}


@property (readonly, copy, nonatomic) NSArray *imageLoaders;
@property (readonly, copy, nonatomic) NSArray *imageServices;
@property (readonly, copy, nonatomic) NSArray *imageStorageServices;


+(id)sharedInstance;
-(id)imageLoaderForServiceIdentifier:(id)arg0 ;
-(id)imageServiceForServiceIdentifier:(id)arg0 ;
-(id)imageStorageServiceForServiceIdentifier:(id)arg0 ;
-(id)init;
-(void)_reprioritizeImageServices;
-(void)registerImageService:(id)arg0 ;
-(void)unregisterImageService:(id)arg0 ;


@end


#endif