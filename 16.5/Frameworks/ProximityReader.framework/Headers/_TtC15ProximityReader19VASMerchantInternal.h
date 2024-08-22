// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15PROXIMITYREADER19VASMERCHANTINTERNAL_H
#define _TTC15PROXIMITYREADER19VASMERCHANTINTERNAL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC15ProximityReader19VASMerchantInternal : NSObject <NSSecureCoding>

 {
    ? merchantIdentifier;
    ? url;
    ? sendURLOnly;
    ? localizedName;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif