// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIBASEPARAMS_H
#define DIBASEPARAMS_H

@class NSError, NSUUID, NSURL;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>

#import "DiskImageParamsXPC.h"
#import "DIURL.h"

@interface DIBaseParams : NSObject <NSSecureCoding, NSCoding>



@property (readonly, nonatomic) BOOL RAMdisk;
@property (readonly, nonatomic) shared_ptr<Backend> backend;
@property (readonly, nonatomic) *void cryptoHeader;
@property (copy, nonatomic) NSError *deserializationError; // ivar: _deserializationError
@property (retain, nonatomic) DiskImageParamsXPC *diskImageParamsXPC; // ivar: _diskImageParamsXPC
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID;
@property (readonly, nonatomic) BOOL hasUnlockedBackend;
@property (readonly, copy, nonatomic) DIURL *inputURL; // ivar: _inputURL
@property (readonly, copy, nonatomic) NSUUID *instanceID;
@property (nonatomic) NSUInteger rawBlockSize;
@property (nonatomic) NSUInteger readPassphraseFlags; // ivar: _readPassphraseFlags
@property (copy, nonatomic) NSURL *shadowURL; // ivar: _shadowURL


+(BOOL)supportsSecureCoding;
-(BOOL)openExistingImageWithFlags:(int)arg0 error:(*id)arg1 ;
-(BOOL)prepareImageWithXpcHandler:(id)arg0 fileMode:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setPassphrase:(char *)arg0 error:(*id)arg1 ;
-(BOOL)validateDeserializationWithError:(*id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif