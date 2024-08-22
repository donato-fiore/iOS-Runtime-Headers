// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATADDRESS_H
#define CATADDRESS_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface CATAddress : NSObject

@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic, getter=isAny) BOOL any;
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic, getter=isLocalWiFi) BOOL localWiFi;


+(id)any;
+(id)localWiFi;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAddress:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif