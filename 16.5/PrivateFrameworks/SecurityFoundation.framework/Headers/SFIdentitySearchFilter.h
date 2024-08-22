// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFIDENTITYSEARCHFILTER_H
#define SFIDENTITYSEARCHFILTER_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFIdentitySearchFilter : NSObject <NSCopying, NSSecureCoding>

 {
    id *_identitySearchFilterInternal;
}


@property (copy, nonatomic) NSArray *certificateSerialNumbers;
@property (copy, nonatomic) NSArray *certificateTypes;
@property (copy, nonatomic) NSArray *keySpecifiers;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif