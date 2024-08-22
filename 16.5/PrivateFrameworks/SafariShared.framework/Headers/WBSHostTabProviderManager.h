// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHOSTTABPROVIDERMANAGER_H
#define WBSHOSTTABPROVIDERMANAGER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface WBSHostTabProviderManager : NSObject {
    NSMapTable *_providerMapTable;
    NSMapTable *_hostTabMapTable;
}




+(id)sharedManager;
-(id)_hostTabForContentUUID:(id)arg0 ;
-(id)init;
-(id)providerForContentUUID:(id)arg0 ;
-(void)registerHostTab:(id)arg0 ;
-(void)unregisterHostTab:(id)arg0 ;


@end


#endif