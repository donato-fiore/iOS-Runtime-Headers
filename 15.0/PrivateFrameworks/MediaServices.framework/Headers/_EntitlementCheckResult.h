// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ENTITLEMENTCHECKRESULT_H
#define _ENTITLEMENTCHECKRESULT_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface _EntitlementCheckResult : NSObject

@property (nonatomic, getter=isEntitled) BOOL entitled; // ivar: _entitled
@property (copy, nonatomic) NSString *entitlement; // ivar: _entitlement
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *group; // ivar: _group


-(id)initWithEntitlement:(id)arg0 group:(id)arg1 ;


@end


#endif