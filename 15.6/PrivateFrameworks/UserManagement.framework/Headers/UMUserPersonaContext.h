// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMUSERPERSONACONTEXT_H
#define UMUSERPERSONACONTEXT_H

@protocol NSCopying, OS_voucher;

#import <Foundation/Foundation.h>


@interface UMUserPersonaContext : NSObject <NSCopying>

 {
    NSObject<OS_voucher> *_voucher;
}




+(id)currentPersonaContext;
-(id)copyPersonaContext:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)contextAdopt;
-(void)setPropertiesFromUserPersona:(id)arg0 ;


@end


#endif