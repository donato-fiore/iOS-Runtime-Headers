// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCSESSIONPEERCONNECTIONDATA_H
#define MCSESSIONPEERCONNECTIONDATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MCSessionPeerConnectionData : NSObject

@property (nonatomic) NSInteger encryptionPreference; // ivar: _encryptionPreference
@property (retain, nonatomic) NSData *gckSessionConnectionData; // ivar: _gckSessionConnectionData
@property (nonatomic) BOOL hasIdentitySet; // ivar: _hasIdentitySet


+(id)connectionDataSegmentWithEncryptionPreference:(NSInteger)arg0 identitySet:(BOOL)arg1 gckSessionConnectionDataBytes:(*void)arg2 gckSessionConnectionDataLength:(NSUInteger)arg3 ;
-(BOOL)parseConnectionDataBlob:(id)arg0 ;
-(BOOL)parseConnectionDataSegmentWithBytes:(char *)arg0 withLength:(NSUInteger)arg1 ;
-(id)initWithConnectionDataBlob:(id)arg0 ;
-(void)dealloc;


@end


#endif