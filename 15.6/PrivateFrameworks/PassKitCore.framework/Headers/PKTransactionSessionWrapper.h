// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONSESSIONWRAPPER_H
#define PKTRANSACTIONSESSIONWRAPPER_H

@class STSSession;
@protocol NFSession;

#import <Foundation/Foundation.h>


@interface PKTransactionSessionWrapper : NSObject {
    NSUInteger _firstInQueue;
}


@property (nonatomic, getter=isFirstInQueue) BOOL firstInQueue;
@property (readonly, nonatomic) NSObject<NFSession> *nfSession; // ivar: _nfSession
@property (readonly, nonatomic) STSSession *stsSession; // ivar: _stsSession


-(id)initWithNFSession:(id)arg0 ;
-(id)initWithSTSSession:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithCompletion:(id)arg0 ;


@end


#endif