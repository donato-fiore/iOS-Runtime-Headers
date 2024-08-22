// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITAPPLICATION_H
#define AXAUDITAPPLICATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AXAuditPSN.h"

@interface AXAuditApplication : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) AXAuditPSN *psnObj; // ivar: _psnObj


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif