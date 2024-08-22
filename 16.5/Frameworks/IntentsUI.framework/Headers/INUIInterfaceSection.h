// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INUIINTERFACESECTION_H
#define INUIINTERFACESECTION_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INUIInterfaceSection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger interactiveBehavior; // ivar: _interactiveBehavior
@property (readonly, copy, nonatomic) NSSet *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteractiveBehavior:(NSUInteger)arg0 parameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif