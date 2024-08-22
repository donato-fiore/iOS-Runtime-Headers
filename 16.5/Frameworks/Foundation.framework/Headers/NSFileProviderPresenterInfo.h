// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDERPRESENTERINFO_H
#define NSFILEPROVIDERPRESENTERINFO_H

@class NSURL, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileProviderPresenterInfo : NSObject <NSSecureCoding>



@property (copy) NSURL *changedURL; // ivar: changedURL
@property (readonly, copy) NSSet *observedUbiquityAttributes; // ivar: observedUbiquityAttributes
@property (readonly) ? presenterAuditToken; // ivar: presenterAuditToken
@property (readonly, copy) NSString *presenterID; // ivar: presenterID


+(BOOL)supportsSecureCoding;
+(id)infoWithPresenterID:(id)arg0 auditToken:(struct ? )arg1 observedUbiquityAttributes:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif