// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBUNDLERESOURCEDESCRIPTOR_H
#define PKBUNDLERESOURCEDESCRIPTOR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBundleResourceDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *extension; // ivar: _extension
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)withName:(id)arg0 extension:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBundleResourceDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 extension:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif