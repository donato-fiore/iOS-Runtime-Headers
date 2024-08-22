// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KVDONATEXPCCLIENTFACTORY_H
#define KVDONATEXPCCLIENTFACTORY_H

@class NSString;
@protocol KVDonateServiceProvider;

#import <Foundation/Foundation.h>

#import "KVDonateVersionLog.h"

@interface KVDonateXPCClientFactory : NSObject <KVDonateServiceProvider>

 {
    KVDonateVersionLog *_versionLog;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)makeConnection:(id)arg0 ;
-(id)versionLog;


@end


#endif