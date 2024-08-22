// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCFELICATAG_H
#define NFCFELICATAG_H

@class NSData, NSString;
@protocol NFCFeliCaTag, NFCReaderSession;


#import "NFCTag.h"

@interface NFCFeliCaTag : NFCTag <NFCFeliCaTag>



@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, retain, nonatomic) NSData *currentIDm;
@property (readonly, retain, nonatomic) NSData *currentSystemCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)pollingWithSystemCode:(id)arg0 requestCode:(NSInteger)arg1 timeSlot:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)readWithoutEncryptionWithServiceCodeList:(id)arg0 blockList:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestResponseWithCompletionHandler:(id)arg0 ;
-(void)requestServiceV2WithNodeCodeList:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestServiceWithNodeCodeList:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestSpecificationVersionWithCompletionHandler:(id)arg0 ;
-(void)requestSystemCodeWithCompletionHandler:(id)arg0 ;
-(void)resetModeWithCompletionHandler:(id)arg0 ;
-(void)sendFeliCaCommandPacket:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeWithoutEncryptionWithServiceCodeList:(id)arg0 blockList:(id)arg1 blockData:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif