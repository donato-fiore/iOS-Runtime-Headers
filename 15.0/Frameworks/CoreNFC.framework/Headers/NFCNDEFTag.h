// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCNDEFTAG_H
#define NFCNDEFTAG_H

@class NSNumber, NSString;
@protocol NFCNDEFTag, NFTag, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NFCNDEFTag : NSObject <NFCNDEFTag>

 {
    id<NFTag> *_tag;
    NSNumber *_sessionKey;
    BOOL _writeLocked;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_connectWithError:(*id)arg0 ;
-(BOOL)_disconnectWithError:(*id)arg0 ;
-(BOOL)isMatchingSession:(id)arg0 outError:(*id)arg1 ;
-(id)_getInternalReaderSession;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSession:(id)arg0 tag:(id)arg1 startupConfig:(NSInteger)arg2 ;
-(void)_connectWithCompletionHandler:(id)arg0 ;
-(void)_setDelegateQueue:(id)arg0 ;
-(void)_setSession:(id)arg0 ;
-(void)_setTag:(id)arg0 ;
-(void)_updateNdefStatusWithSession:(id)arg0 ;
-(void)dispatchBlockOnDelegateQueueAsync:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)queryNDEFStatusWithCompletionHandler:(id)arg0 ;
-(void)readNDEFWithCompletionHandler:(id)arg0 ;
-(void)writeLockWithCompletionHandler:(id)arg0 ;
-(void)writeNDEF:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif