// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDRESTORESERVICE_H
#define ASDRESTORESERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDRestoreService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(id)init;
-(void)clearFollowupsForAccountID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)estimateTotalDownloadSizeWithCompletionHandler:(id)arg0 ;
-(void)prioritizeBundleIDs:(id)arg0 userInitiated:(BOOL)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif