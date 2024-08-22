// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVHOMEMANAGERBRIDGE_H
#define CKVHOMEMANAGERBRIDGE_H

@class NSString, HMHomeManager;
@protocol HMHomeManagerDelegate, CKVProviderDatasetBridge, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKVHomeManagerBridge : NSObject <HMHomeManagerDelegate, CKVProviderDatasetBridge>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property BOOL homesLoaded; // ivar: _homesLoaded
@property (readonly, nonatomic) CGFloat setupTimeout; // ivar: _setupTimeout
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *waitGroup; // ivar: _waitGroup


-(BOOL)enumerateVocabularyItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(Class)itemClass;
-(id)_parseHMAccessory:(id)arg0 ;
-(id)_parseHMActionSet:(id)arg0 ;
-(id)_parseHMHome:(id)arg0 ;
-(id)_parseHMRoom:(id)arg0 ;
-(id)_parseHMService:(id)arg0 ;
-(id)_parseHMServiceGroup:(id)arg0 ;
-(id)_parseHMTrigger:(id)arg0 ;
-(id)_parseHMZone:(id)arg0 ;
-(id)init;
-(id)initWithHomeManager:(id)arg0 waitGroup:(id)arg1 setupTimeout:(CGFloat)arg2 ;
-(id)originApp;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif