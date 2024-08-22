// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPLFORCEDSYNCHISTORY_H
#define _CPLFORCEDSYNCHISTORY_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "CPLScopeFilter.h"

@interface _CPLForcedSyncHistory : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) BOOL discarded; // ivar: _discarded
@property (readonly, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) CPLScopeFilter *filter; // ivar: _filter
@property (readonly, nonatomic) Class taskClass; // ivar: _taskClass


-(id)descriptionWithNow:(id)arg0 ;
-(id)initWithForcedSyncTask:(id)arg0 discarded:(BOOL)arg1 error:(id)arg2 ;


@end


#endif