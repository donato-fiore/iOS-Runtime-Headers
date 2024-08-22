// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKREPORTINGCONCURRENTREQUEST_H
#define DKREPORTINGCONCURRENTREQUEST_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "DKExtensionAdapter.h"

@interface DKReportingConcurrentRequest : NSObject

@property (retain, nonatomic) DKExtensionAdapter *generator; // ivar: _generator
@property (retain, nonatomic) NSMutableSet *manifest; // ivar: _manifest


+(id)concurrentRequestWithGenerator:(id)arg0 ;
-(id)initWithGenerator:(id)arg0 ;


@end


#endif