// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSEXPORTMULTIUSERSTATETASK_H
#define AMSEXPORTMULTIUSERSTATETASK_H

@class NSUUID;
@protocol AMSMultiUserServiceProtocol;


#import "AMSTask.h"

@interface AMSExportMultiUserStateTask : AMSTask

@property (readonly, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, nonatomic) NSObject<AMSMultiUserServiceProtocol> *multiUserService; // ivar: _multiUserService
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(id)initWithHomeIdentifier:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithHomeIdentifier:(id)arg0 options:(NSUInteger)arg1 multiUserService:(id)arg2 ;
-(id)performTask;


@end


#endif