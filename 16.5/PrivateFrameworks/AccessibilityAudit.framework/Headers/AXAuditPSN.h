// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITPSN_H
#define AXAUDITPSN_H


#import <Foundation/Foundation.h>


@interface AXAuditPSN : NSObject

@property (nonatomic) ProcessSerialNumber psn; // ivar: _psn


+(id)createWithPSN:(struct ProcessSerialNumber )arg0 ;
+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif