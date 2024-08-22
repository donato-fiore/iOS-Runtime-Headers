// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPACCESSORIESRECORD_H
#define CHIPACCESSORIESRECORD_H

@class NSMutableSet, NSString, NSSet, CKRecord;
@protocol NSCopying, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>


@interface CHIPAccessoriesRecord : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject<OS_os_log> *_log;
    NSMutableSet *_accessoryMutableList;
    NSString *_zone;
}


@property (readonly) NSSet *accessoryList;
@property (readonly) NSString *accessoryListSignature; // ivar: _accessoryListSignature
@property (readonly) CKRecord *ckRecord; // ivar: _ckRecord
@property (readonly) NSString *stonehengeCertificateID; // ivar: _stonehengeCertificateID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCKRecord:(id)arg0 zone:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)createAccessoryListFromRecord;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif