// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVEFFECTREGISTRYENTRY_H
#define PVEFFECTREGISTRYENTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PVEffectRegistryEntry : NSObject {
    Class _effectClass;
    NSDictionary *_effectProperties;
}




-(Class)effectClass;
-(id)effectProperties;
-(id)initWithClass:(Class)arg0 andProperties:(id)arg1 ;
-(void)dealloc;


@end


#endif