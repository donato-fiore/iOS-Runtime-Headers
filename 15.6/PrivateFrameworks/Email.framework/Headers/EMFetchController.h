// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMFETCHCONTROLLER_H
#define EMFETCHCONTROLLER_H


#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMFetchController : NSObject

@property (retain) EMRemoteConnection *connection; // ivar: _connection


+(id)remoteInterface;
-(id)diagnosticInformation;
-(id)initWithRemoteConnection:(id)arg0 ;
-(void)performFetchOfType:(int)arg0 ;
-(void)performFetchOfType:(int)arg0 accounts:(id)arg1 ;
-(void)performFetchOfType:(int)arg0 mailboxes:(id)arg1 ;
-(void)setCurrentSuppressionContexts:(id)arg0 suppressedContexts:(id)arg1 ;


@end


#endif