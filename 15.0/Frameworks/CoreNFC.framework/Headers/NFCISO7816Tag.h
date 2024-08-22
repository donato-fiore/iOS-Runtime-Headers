// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCISO7816TAG_H
#define NFCISO7816TAG_H

@class NSData, NSString;
@protocol NFCISO7816Tag, NFCReaderSession;


#import "NFCTag.h"

@interface NFCISO7816Tag : NFCTag <NFCISO7816Tag>



@property (readonly, copy, nonatomic) NSData *applicationData;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *historicalBytes;
@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, retain, nonatomic) NSString *initialSelectedAID;
@property (readonly, nonatomic) BOOL proprietaryApplicationDataCoding;
@property (readonly, weak, nonatomic) NSObject<NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)sendCommandAPDU:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif