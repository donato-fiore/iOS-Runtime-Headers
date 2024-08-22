// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCSLOCKASSERTION_H
#define PCSLOCKASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PCSLockManager.h"

@interface PCSLockAssertion : NSObject

@property BOOL held; // ivar: _held
@property (retain) PCSLockManager *manager; // ivar: _manager
@property (retain) NSString *name; // ivar: _name


-(BOOL)holdAssertion;
-(id)initAssertion:(id)arg0 manager:(id)arg1 ;
-(void)dealloc;
-(void)dropAssertion;


@end


#endif