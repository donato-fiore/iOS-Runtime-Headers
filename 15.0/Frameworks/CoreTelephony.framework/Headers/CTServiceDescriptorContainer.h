// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSERVICEDESCRIPTORCONTAINER_H
#define CTSERVICEDESCRIPTORCONTAINER_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTServiceDescriptorContainer : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *descriptors; // ivar: _descriptors


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptors:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif