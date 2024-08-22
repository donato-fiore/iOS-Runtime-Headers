// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSMODELREADOPTIONS_H
#define VNPERSONSMODELREADOPTIONS_H

@class NSIndexSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNPersonsModelReadOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSIndexSet *acceptableVersions; // ivar: _acceptableVersions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif