// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMAUTOMATIONBUILDER_H
#define _HMAUTOMATIONBUILDER_H

@class NSString, NSUUID;
@protocol HMAutomationBuilderInternal;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMHome.h"

@interface _HMAutomationBuilder : NSObject <HMAutomationBuilderInternal>

 {
    os_unfair_lock_s _lock;
    _HMContext *_context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(void)adoptExternalCategoriesFromClasses:(Class)arg0 ;
-(id)assistantIdentifier;
-(id)initWithContext:(id)arg0 home:(id)arg1 ;
-(id)uuid;


@end


#endif