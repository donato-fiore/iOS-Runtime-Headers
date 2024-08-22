// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFAWDLPEERCONTEXT_H
#define CWFAWDLPEERCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFAWDLPeerContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *MACAddress; // ivar: _MACAddress
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName


+(BOOL)supportsSecureCoding;
+(id)AWDLPeerContextWithMACAddress:(id)arg0 interfaceName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAWDLPeerContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif