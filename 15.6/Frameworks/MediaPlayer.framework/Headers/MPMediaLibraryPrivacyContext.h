// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIALIBRARYPRIVACYCONTEXT_H
#define MPMEDIALIBRARYPRIVACYCONTEXT_H

@class PAApplication, PAAccessInterval;

#import <Foundation/Foundation.h>


@interface MPMediaLibraryPrivacyContext : NSObject {
    PAApplication *_clientApplication;
    PAAccessInterval *_privacyAccessInterval;
}




+(id)contextForDefaultClient;
+(id)sharedContextForCurrentProcess;
+(void)initialize;
+(void)setDefaultClientWithAuditToken:(struct ? )arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithClientIdentity:(id)arg0 ;
-(id)initWithPAApplication:(id)arg0 ;
-(void)beginAccessInterval;
-(void)endAccessInterval;
-(void)logPrivacyAccess;


@end


#endif