// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSYSTEMSHELLINITIALIZATIONCONTEXT_H
#define FBSYSTEMSHELLINITIALIZATIONCONTEXT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FBSystemShellInitializationOptions.h"

@interface FBSystemShellInitializationContext : NSObject <NSCopying>

 {
    BOOL _bootedDark;
}


@property (readonly, nonatomic, getter=wasBootedDark) BOOL bootedDark;
@property (readonly, nonatomic) NSUInteger lastExitReason;
@property (readonly, nonatomic) FBSystemShellInitializationOptions *options; // ivar: _options


-(id)_initWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif