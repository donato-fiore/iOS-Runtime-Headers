// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTTODAYMODULEDESCRIPTORSOPERATION_H
#define NTTODAYMODULEDESCRIPTORSOPERATION_H

@class FCOperation, NSArray;
@protocol FCContentContext, FCReadablePrivateDataStorage;



@interface NTTodayModuleDescriptorsOperation : FCOperation

@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (copy, nonatomic) NSArray *contentRequests; // ivar: _contentRequests
@property (copy, nonatomic) id *descriptorsCompletion; // ivar: _descriptorsCompletion
@property (retain, nonatomic) NSObject<FCReadablePrivateDataStorage> *privateDataStorage; // ivar: _privateDataStorage
@property (nonatomic) BOOL requireRefreshedAppConfig; // ivar: _requireRefreshedAppConfig


-(id)init;


@end


#endif