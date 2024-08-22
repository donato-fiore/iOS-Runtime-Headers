// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMCPROFILECONNECTION_H
#define CNMCPROFILECONNECTION_H

@class NSString;
@protocol CNMCProfileConnection;

#import <Foundation/Foundation.h>


@interface CNMCProfileConnection : NSObject <CNMCProfileConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)communicationServiceRulesExistForBundleID:(id)arg0 forCommunicationServiceType:(id)arg1 ;
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg0 forAccountWithIdentifier:(id)arg1 ;
-(id)observableForManagedConfigChanged;


@end


#endif