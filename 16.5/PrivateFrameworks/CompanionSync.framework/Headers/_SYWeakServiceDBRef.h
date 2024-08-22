// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SYWEAKSERVICEDBREF_H
#define _SYWEAKSERVICEDBREF_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_SYSharedServiceDB.h"

@interface _SYWeakServiceDBRef : NSObject

@property (weak, nonatomic) _SYSharedServiceDB *db; // ivar: _db
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithServiceName:(id)arg0 ;


@end


#endif