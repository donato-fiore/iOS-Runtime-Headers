// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFDQDECALLSITE_H
#define _PFDQDECALLSITE_H

@class NSData, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PFDQDECallSite : NSObject <NSCopying>

 {
    NSData *_addresses;
    NSArray *_symbols;
}




+(id)currentCallSite;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)backtraceWithPrefix:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAddresses:(id)arg0 ;


@end


#endif