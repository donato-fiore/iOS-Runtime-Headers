// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCMIFARETAG_H
#define NFCMIFARETAG_H

@class NSString, NSData;
@protocol NFCMiFareTag, NFCReaderSession;


#import "NFCTag.h"

@interface NFCMiFareTag : NFCTag <NFCMiFareTag>



@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *historicalBytes;
@property (readonly, copy, nonatomic) NSData *identifier;
@property (nonatomic) NSUInteger mifareFamily; // ivar: _mifareFamily
@property (readonly, weak, nonatomic) NSObject<NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSession:(id)arg0 tag:(id)arg1 startupConfig:(NSInteger)arg2 ;
-(void)sendMiFareCommand:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendMiFareISO7816Command:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif