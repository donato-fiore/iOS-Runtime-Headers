// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBUUID_H
#define CBUUID_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CBUUID : NSObject <NSCopying>

 {
    unsigned char _bytes;
    char _type;
}


@property (readonly, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSData *data;


+(id)UUIDWithCFUUID:(struct __CFUUID *)arg0 ;
+(id)UUIDWithData:(id)arg0 ;
+(id)UUIDWithNSUUID:(id)arg0 ;
+(id)UUIDWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCFUUID:(struct __CFUUID *)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithNSUUID:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif