// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPSUPPORTEDACCESSORYMANAGER_H
#define UARPSUPPORTEDACCESSORYMANAGER_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface UARPSupportedAccessoryManager : NSObject {
    NSMutableSet *_setOfAccessories;
}


@property (readonly) NSSet *setOfAccessories;


+(id)defaultManager;
-(id)init;
-(void)addSupportedAccessories:(id)arg0 ;
-(void)addSupportedAccessory:(id)arg0 ;
-(void)addSupportedAccessoryByDictionary:(id)arg0 ;


@end


#endif