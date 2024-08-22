// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSTAGINGSCOPECHANGE_H
#define CPLSTAGINGSCOPECHANGE_H

@class NSData;


#import "CPLScopeChange.h"

@interface CPLStagingScopeChange : CPLScopeChange

@property (copy, nonatomic) CPLScopeChange *stagedScopeChange; // ivar: _stagedScopeChange
@property (nonatomic) NSInteger stagedScopeFlags; // ivar: _stagedScopeFlags
@property (copy, nonatomic) NSData *stagedTransportScope; // ivar: _stagedTransportScope




@end


#endif