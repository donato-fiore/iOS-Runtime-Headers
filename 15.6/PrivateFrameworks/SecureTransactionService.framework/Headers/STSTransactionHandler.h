// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTRANSACTIONHANDLER_H
#define STSTRANSACTIONHANDLER_H

@class NSData;
@protocol STSSessionDelegate;

#import <Foundation/Foundation.h>

#import "STSCredential.h"
#import "STSSession.h"

@interface STSTransactionHandler : NSObject

@property (retain, nonatomic) STSCredential *activeSTSCredential; // ivar: _activeSTSCredential
@property (readonly, weak, nonatomic) NSObject<STSSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSData *handoffToken; // ivar: _handoffToken
@property (readonly, weak, nonatomic) STSSession *parent; // ivar: _parent
@property (readonly, nonatomic) unsigned char supportedCredentialType;


-(id)activate;
-(id)activateWithDelegate:(id)arg0 ;
-(id)activateWithDelegate:(id)arg0 handoffToken:(id)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)setActiveCredential:(id)arg0 ;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)stopTransaction;
-(void)_tearDown;
-(void)tearDownWithCompletion:(id)arg0 ;


@end


#endif