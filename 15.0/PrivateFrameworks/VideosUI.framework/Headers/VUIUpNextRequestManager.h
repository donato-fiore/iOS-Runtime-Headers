// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIUPNEXTREQUESTMANAGER_H
#define VUIUPNEXTREQUESTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUIUpNextRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingCanonicalIDOperationDictionary; // ivar: _ongoingCanonicalIDOperationDictionary


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_displayConfirmationForAction:(NSUInteger)arg0 ;
-(void)sendRequestForCanonicalID:(id)arg0 action:(NSUInteger)arg1 confirmationShouldWaitCompletion:(BOOL)arg2 ;


@end


#endif