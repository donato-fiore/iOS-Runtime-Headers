// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMHOMEMANAGERBRIDGE_H
#define KMHOMEMANAGERBRIDGE_H

@class KVItemMapper, NSString, HMHomeManager;
@protocol HMHomeManagerDelegate, KMProviderDatasetBridge, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface KMHomeManagerBridge : NSObject <HMHomeManagerDelegate, KMProviderDatasetBridge>

 {
    KVItemMapper *_itemMapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *setupSema; // ivar: _setupSema
@property (readonly, nonatomic) CGFloat setupTimeout; // ivar: _setupTimeout
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)init;
-(id)initWithHomeManager:(id)arg0 setupTimeout:(CGFloat)arg1 ;
-(id)originAppId;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif