// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BACKENDXPC_H
#define BACKENDXPC_H

@class NSUUID;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>


@interface BackendXPC : NSObject <NSSecureCoding, NSCoding>

 {
    unique_ptr<crypto::header, std::default_delete<crypto::header>> _cryptoHeader;
}


@property (nonatomic) shared_ptr<Backend> backend; // ivar: _backend
@property (readonly, nonatomic) *void cryptoHeader;
@property (readonly, copy, nonatomic) NSUUID *instanceID;


+(BOOL)supportsSecureCoding;
+(id)newFileBackendWithURL:(id)arg0 fileOpenFlags:(int)arg1 error:(*id)arg2 ;
-(BOOL)isUnlocked;
-(BOOL)tryCreatingCryptoHeader;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)newUnlockedBackendXPCWithPassphrase:(char *)arg0 isNewImage:(BOOL)arg1 error:(*id)arg2 ;
-(id)newWithCryptoFormat:(*void)arg0 ;
-(int)lock;
-(struct shared_ptr<Backend> )getCryptoHeaderBackend;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceWithBackendXPC:(id)arg0 ;


@end


#endif