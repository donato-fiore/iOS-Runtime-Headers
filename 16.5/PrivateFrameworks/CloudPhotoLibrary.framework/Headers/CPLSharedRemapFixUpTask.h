// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSHAREDREMAPFIXUPTASK_H
#define CPLSHAREDREMAPFIXUPTASK_H


#import <Foundation/Foundation.h>

#import "CPLScopedIdentifier.h"

@interface CPLSharedRemapFixUpTask : NSObject

@property (readonly, nonatomic) CPLScopedIdentifier *privateCloudScopedIdentifier; // ivar: _privateCloudScopedIdentifier
@property (readonly, nonatomic) CPLScopedIdentifier *proposedPrivateScopedIdentifier; // ivar: _proposedPrivateScopedIdentifier
@property (readonly, nonatomic) CPLScopedIdentifier *realCloudScopedIdentifier; // ivar: _realCloudScopedIdentifier
@property (readonly, nonatomic) Class recordClass; // ivar: _recordClass
@property (readonly, nonatomic) CPLScopedIdentifier *sharedCloudScopedIdentifier; // ivar: _sharedCloudScopedIdentifier


-(id)description;
-(id)initWithSharedCloudScopedIdentifier:(id)arg0 realCloudScopedIdentifier:(id)arg1 privateCloudScopedIdentifier:(id)arg2 proposedPrivateScopedIdentifier:(id)arg3 recordClass:(Class)arg4 ;
-(id)redactedDescription;


@end


#endif