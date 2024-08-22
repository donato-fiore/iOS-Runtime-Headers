// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYWEBSERVICEAPPLYSTEPINFO_H
#define PKAPPLYWEBSERVICEAPPLYSTEPINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PKApplyWebServiceApplyStepInfo : NSObject

@property (readonly, nonatomic) NSUInteger contextType; // ivar: _contextType
@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, copy, nonatomic) NSString *coreIDVServiceProviderName; // ivar: _coreIDVServiceProviderName
@property (readonly, copy, nonatomic) NSString *coreIDVSessionID; // ivar: _coreIDVSessionID
@property (readonly, copy, nonatomic) NSString *coreIDVTier; // ivar: _coreIDVTier
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates; // ivar: _encryptionCertificates
@property (readonly, copy, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion
@property (readonly, copy, nonatomic) NSArray *pages; // ivar: _pages


-(id)initWithJSONObject:(id)arg0 featureApplication:(id)arg1 ;
-(void)_handleCertificates:(id)arg0 ;


@end


#endif