// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SUINSTALLATIONCONSTRAINTBLOCKOBSERVERTOKEN_H
#define _SUINSTALLATIONCONSTRAINTBLOCKOBSERVERTOKEN_H

@class NSString;
@protocol SUInvalidatable;

#import <Foundation/Foundation.h>

#import "SUInstallationConstraintObserver.h"

@interface _SUInstallationConstraintBlockObserverToken : NSObject <SUInvalidatable>

 {
    SUInstallationConstraintObserver *_observer;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif