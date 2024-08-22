// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSUSAGEDATAAPPBUNDLE_H
#define NSSUSAGEDATAAPPBUNDLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NSSSizeVector.h"

@interface NSSUsageDataAppBundle : NSObject

@property (readonly, retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, retain, nonatomic) NSSSizeVector *size; // ivar: _size
@property (readonly, nonatomic) BOOL supportsManualPurge; // ivar: _supportsManualPurge
@property (readonly, retain, nonatomic) NSString *vendor; // ivar: _vendor


-(id)initWithName:(id)arg0 bundleIdentifier:(id)arg1 bundleVersion:(id)arg2 vendor:(id)arg3 size:(id)arg4 supportsPurge:(BOOL)arg5 ;
-(id)mergeWith:(id)arg0 ;
-(id)withSize:(id)arg0 purge:(BOOL)arg1 ;


@end


#endif