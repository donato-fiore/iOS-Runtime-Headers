// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _KSTRCLIENT_H
#define _KSTRCLIENT_H

@class NSString;
@protocol _KSTextReplacementServiceProtocol;

#import <Foundation/Foundation.h>

#import "_KSTextReplacementServer.h"

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol>

 {
    _KSTextReplacementServer *_owner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger generation; // ivar: _generation
@property (readonly, nonatomic) BOOL hasReadAccess; // ivar: _hasReadAccess
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOwner:(id)arg0 ;
-(id)initWithOwner:(id)arg0 forConnection:(id)arg1 ;
-(void)addEntries:(id)arg0 removeEntries:(id)arg1 withReply:(id)arg2 ;
-(void)cancel;
-(void)cancelPendingUpdatesWithReply:(id)arg0 ;
-(void)queryTextReplacementEntriesWithReply:(id)arg0 ;
-(void)queryTextReplacementsWithPredicate:(id)arg0 reply:(id)arg1 ;
-(void)removeAllEntries;
-(void)requestSyncWithReply:(id)arg0 ;


@end


#endif