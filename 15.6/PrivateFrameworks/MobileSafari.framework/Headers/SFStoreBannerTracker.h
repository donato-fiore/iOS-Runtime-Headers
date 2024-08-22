// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSTOREBANNERTRACKER_H
#define SFSTOREBANNERTRACKER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFStoreBannerTracker : NSObject {
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedTracker;
-(id)filePath;
-(id)init;
-(void)blockProductBanner:(id)arg0 ;
-(void)clear;
-(void)isProductBannerBlocked:(id)arg0 completion:(id)arg1 ;
-(void)load;
-(void)save;


@end


#endif