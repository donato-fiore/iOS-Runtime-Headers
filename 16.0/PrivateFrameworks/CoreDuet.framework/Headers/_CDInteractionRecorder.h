// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDINTERACTIONRECORDER_H
#define _CDINTERACTIONRECORDER_H

@class NSXPCConnection;
@protocol _CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording;

#import <Foundation/Foundation.h>

#import "_CDInteractionPolicies.h"

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording>

 {
    NSXPCConnection *_connection;
    _CDInteractionPolicies *_policies;
}


@property BOOL enforceDataLimits; // ivar: _enforceDataLimits
@property BOOL enforcePrivacy; // ivar: _enforcePrivacy


+(id)interactionRecorder;
-(BOOL)recordInteraction:(id)arg0 ;
-(BOOL)recordInteractions:(id)arg0 ;
-(BOOL)recordInteractions:(id)arg0 synchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(NSUInteger)countContactsUsingPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countInteractionsUsingPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteInteractionsMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
-(NSUInteger)deleteInteractionsWithBundleId:(id)arg0 account:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)deleteInteractionsWithBundleId:(id)arg0 domainIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)deleteInteractionsWithBundleId:(id)arg0 error:(*id)arg1 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)queryContactsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)countContactsUsingPredicate:(id)arg0 completionHandler:(id)arg1 ;
-(void)countContactsUsingPredicate:(id)arg0 synchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)countInteractionsUsingPredicate:(id)arg0 completionHandler:(id)arg1 ;
-(void)countInteractionsUsingPredicate:(id)arg0 synchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)deleteInteractionsMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteInteractionsMatchingPredicate:(id)arg0 synchronous:(BOOL)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 account:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 domainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 synchronous:(BOOL)arg1 account:(id)arg2 completionHandler:(id)arg3 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 synchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 synchronous:(BOOL)arg1 domainIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)queryContactsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)queryContactsUsingPredicate:(id)arg0 synchronous:(BOOL)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)queryInteractionsUsingPredicate:(id)arg0 synchronous:(BOOL)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)recordInteractions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif