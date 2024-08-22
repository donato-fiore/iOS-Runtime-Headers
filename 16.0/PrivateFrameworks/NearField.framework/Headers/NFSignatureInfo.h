// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFSIGNATUREINFO_H
#define NFSIGNATUREINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFSignatureInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger certificateVersion; // ivar: _certificateVersion
@property (readonly, retain, nonatomic) NSString *eccCert; // ivar: _eccCert
@property (readonly, retain, nonatomic) NSString *eckaCert; // ivar: _eckaCert
@property (readonly, retain, nonatomic) NSString *jsblCounter; // ivar: _jsblCounter
@property (readonly, retain, nonatomic) NSString *platformId; // ivar: _platformId
@property (readonly, retain, nonatomic) NSString *rsaCert; // ivar: _rsaCert
@property (readonly, retain, nonatomic) NSString *seid; // ivar: _seid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif