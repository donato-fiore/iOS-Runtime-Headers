// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBBUNDLEPROPERTIESBSXPCPROVIDER_H
#define RBBUNDLEPROPERTIESBSXPCPROVIDER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface RBBundlePropertiesBSXPCProvider : NSObject {
    NSMapTable *_propertiesByIdentifier;
    os_unfair_lock_s _lock;
}




-(id)debugDescription;
-(id)init;
-(id)propertiesForIdentifier:(id)arg0 ;
-(void)removePropertiesForIdentifier:(id)arg0 ;


@end


#endif