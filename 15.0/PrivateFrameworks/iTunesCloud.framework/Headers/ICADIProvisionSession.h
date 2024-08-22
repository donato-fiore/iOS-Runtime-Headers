// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICADIPROVISIONSESSION_H
#define ICADIPROVISIONSESSION_H


#import <Foundation/Foundation.h>


@interface ICADIProvisionSession : NSObject {
    NSUInteger _accountID;
    unsigned int _sessionID;
}




-(BOOL)endWithMessageData:(id)arg0 transportKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)startWithServerActionData:(id)arg0 returningClientData:(*id)arg1 error:(*id)arg2 ;
-(id)initWithAccountID:(NSUInteger)arg0 ;
-(void)_destroySession;
-(void)dealloc;


@end


#endif