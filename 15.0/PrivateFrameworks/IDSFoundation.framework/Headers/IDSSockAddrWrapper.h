// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSOCKADDRWRAPPER_H
#define IDSSOCKADDRWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSSockAddrWrapper : NSObject <NSCopying>

 {
    sockaddr_storage _sa;
}


@property (readonly, nonatomic) *sockaddr sa;
@property (readonly, nonatomic) *sockaddr_in sa4;
@property (readonly, nonatomic) *sockaddr_in6 sa6;
@property (readonly, nonatomic) unsigned short saPortHostOrder;


+(id)wrapperWithAddressString:(id)arg0 withPortHostOrder:(unsigned short)arg1 ;
+(id)wrapperWithAddressString:(id)arg0 withPortHostOrder:(unsigned short)arg1 withInterfaceName:(id)arg2 ;
+(id)wrapperWithSockAddr:(struct sockaddr *)arg0 ;
+(id)wrapperWithWrapper:(id)arg0 andPortHostOrder:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSockAddr:(struct sockaddr *)arg0 ;
-(BOOL)isEqualToWrapper:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSockAddr:(struct sockaddr *)arg0 ;
-(id)ipData;
-(id)ipString;
-(void)copySockAddr:(struct sockaddr *)arg0 ;
-(void)updateLocalPort:(unsigned short)arg0 ;


@end


#endif