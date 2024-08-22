// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTFINGERPRINTMINHASH_H
#define CKCONTEXTFINGERPRINTMINHASH_H



#import "CKContextFingerprint.h"

@interface CKContextFingerprintMinHash : CKContextFingerprint

@property (readonly, nonatomic) *int hashes; // ivar: _hashes
@property (readonly, nonatomic) unsigned int numHashes; // ivar: _numHashes


+(BOOL)supportsSecureCoding;
+(id)parse:(id)arg0 ;
-(float)compareFingerprintWith:(id)arg0 ;
-(id)data;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHashes:(*int)arg0 count:(unsigned int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif