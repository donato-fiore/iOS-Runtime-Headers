// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUSAGEBUNDLECATEGORY_H
#define PSUSAGEBUNDLECATEGORY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PSUsageBundleApp.h"

@interface PSUsageBundleCategory : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) PSUsageBundleApp *usageBundleApp; // ivar: _usageBundleApp


+(id)categoryNamed:(id)arg0 withIdentifier:(id)arg1 forUsageBundleApp:(id)arg2 ;
-(id)description;


@end


#endif