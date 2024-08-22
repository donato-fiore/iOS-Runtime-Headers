// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFKEYCHAINDATA_H
#define SFKEYCHAINDATA_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFKeychainDataAttributes.h"

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding>

 {
    id *_keychainDataInternal;
}


@property (retain, nonatomic) SFKeychainDataAttributes *attributes;
@property (readonly) NSData *data;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif