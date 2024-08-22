// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDCLIENTREQUESTEVENT_H
#define AMDCLIENTREQUESTEVENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMDClientRequestEvent : NSObject

@property (retain) NSString *accountDSID; // ivar: _accountDSID
@property (retain, nonatomic) NSDictionary *customDescriptor; // ivar: _customDescriptor
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *featureName; // ivar: _featureName
@property (retain, nonatomic) NSString *schemaVersion; // ivar: _schemaVersion
@property (retain) NSString *storefrontId; // ivar: _storefrontId


+(id)observer;
+(void)setObserver:(id)arg0 ;
-(id)getAMSRequest;
-(id)initAppSegmentQueryForAccountDSID:(id)arg0 ;
-(id)initWithFeatureName:(id)arg0 withAccountDSID:(id)arg1 andAccountStoreFrontId:(id)arg2 inDomain:(id)arg3 withCustomDescriptor:(id)arg4 andSchemaVersion:(id)arg5 ;


@end


#endif