// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDCLIENTREQUESTEVENT_H
#define AMDCLIENTREQUESTEVENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMDClientRequestEvent : NSObject

@property (retain) NSString *accountDSID; // ivar: _accountDSID
@property (retain, nonatomic) NSDictionary *customDescriptor; // ivar: _customDescriptor
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *featureName; // ivar: _featureName
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId
@property (retain, nonatomic) NSString *request; // ivar: _request
@property (retain, nonatomic) NSString *schemaVersion; // ivar: _schemaVersion
@property (retain) NSString *storefrontId; // ivar: _storefrontId


+(id)observer;
+(void)setObserver:(id)arg0 ;
-(id)getAMSRequest;
-(id)initAppSegmentQueryForAccountDSID:(id)arg0 ;
-(id)initClearUserDataFor:(id)arg0 inDomain:(id)arg1 ;
-(id)initModelPathRequst:(id)arg0 ;
-(id)initWithFeatureName:(id)arg0 withAccountDSID:(id)arg1 andAccountStoreFrontId:(id)arg2 inDomain:(id)arg3 withCustomDescriptor:(id)arg4 andSchemaVersion:(id)arg5 ;
-(void)internalInitializer:(id)arg0 WithFeatureName:(id)arg1 withAccountDSID:(id)arg2 andAccountStoreFrontId:(id)arg3 inDomain:(id)arg4 withCustomDescriptor:(id)arg5 withModelId:(id)arg6 andSchemaVersion:(id)arg7 ;


@end


#endif