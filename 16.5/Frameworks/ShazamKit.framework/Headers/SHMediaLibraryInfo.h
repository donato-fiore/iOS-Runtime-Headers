// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMEDIALIBRARYINFO_H
#define SHMEDIALIBRARYINFO_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SHMediaLibraryInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *identityToken; // ivar: _identityToken
@property (readonly, nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 encrypted:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif