// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INUIEXTENSIONCONTEXTSTATE_H
#define _INUIEXTENSIONCONTEXTSTATE_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _INUIExtensionContextState : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *hostedViewMaximumAllowedSizes; // ivar: _hostedViewMaximumAllowedSizes
@property (copy, nonatomic) NSDictionary *hostedViewMinimumAllowedSizes; // ivar: _hostedViewMinimumAllowedSizes
@property (copy, nonatomic) NSArray *interfaceSections; // ivar: _interfaceSections


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif