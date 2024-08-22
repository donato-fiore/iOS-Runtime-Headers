// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDAUDITINGELIGIBLEDOMAINSMANAGER_H
#define WBSPASSWORDAUDITINGELIGIBLEDOMAINSMANAGER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface WBSPasswordAuditingEligibleDomainsManager : NSObject

@property (copy) NSSet *domainsIneligibleForPasswordAuditing; // ivar: _domainsIneligibleForPasswordAuditing


-(id)init;
-(id)initWithDomainsIneligibleForPasswordAuditing:(id)arg0 ;


@end


#endif