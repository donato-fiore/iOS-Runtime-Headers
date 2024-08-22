// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNEHELPERCLIENT_H
#define HMDNEHELPERCLIENT_H

@class NSArray, NSString;
@protocol HMFLogging, HMDNEHelperClient;

#import <Foundation/Foundation.h>


@interface HMDNEHelperClient : NSObject <HMFLogging, HMDNEHelperClient>

 {
    NSArray *_cachedEntries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_signingIdentifierWithProcessId:(id)arg0 ;
-(id)cacheCopyAppUUIDForSigningIdentifier:(id)arg0 executablePath:(id)arg1 ;
-(id)cacheCopySigningIdentifierForProcessIdentifier:(id)arg0 ;
-(id)init;
-(void)_addIdentifiers:(id)arg0 signingId:(id)arg1 ;
-(void)cacheClearUUIDs;


@end


#endif