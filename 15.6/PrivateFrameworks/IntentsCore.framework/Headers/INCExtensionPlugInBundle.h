// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCEXTENSIONPLUGINBUNDLE_H
#define INCEXTENSIONPLUGINBUNDLE_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface INCExtensionPlugInBundle : NSObject

@property (readonly, copy, nonatomic) NSSet *intentsRestrictedWhileLocked; // ivar: _intentsRestrictedWhileLocked
@property (readonly, copy, nonatomic) NSSet *intentsSupported; // ivar: _intentsSupported
@property (readonly, nonatomic) Class principalClass; // ivar: _principalClass


-(id)initWithPrincipalClass:(Class)arg0 intentsSupported:(id)arg1 intentsRestrictedWhileLocked:(id)arg2 ;


@end


#endif