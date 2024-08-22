// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSTEXTREPLACEMENTCLIENTSTORE_H
#define _KSTEXTREPLACEMENTCLIENTSTORE_H

@class NSString;
@protocol _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation;

#import <Foundation/Foundation.h>

#import "_KSTextReplacementServerConnection.h"

@interface _KSTextReplacementClientStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>

 {
    _KSTextReplacementServerConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)phraseShortcuts;
-(id)textReplacementEntries;
-(void)addEntries:(id)arg0 removeEntries:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)cancelPendingUpdates;
-(void)modifyEntry:(id)arg0 toEntry:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)performTransaction:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryTextReplacementsWithCallback:(id)arg0 ;
-(void)queryTextReplacementsWithPredicate:(id)arg0 callback:(id)arg1 ;
-(void)removeAllEntries;
-(void)requestSyncWithCompletionBlock:(id)arg0 ;


@end


#endif