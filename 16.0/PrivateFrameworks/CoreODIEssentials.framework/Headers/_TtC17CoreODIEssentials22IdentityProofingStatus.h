// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17COREODIESSENTIALS22IDENTITYPROOFINGSTATUS_H
#define _TTC17COREODIESSENTIALS22IDENTITYPROOFINGSTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC17CoreODIEssentials22IdentityProofingStatus : NSObject <NSSecureCoding>

 {
    ? activeConfigurations;
    ? availability;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif