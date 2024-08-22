// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INUIEXTENSIONVIEWCONTROLLERCONFIGURATION_H
#define INUIEXTENSIONVIEWCONTROLLERCONFIGURATION_H

@class NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface INUIExtensionViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger hostedViewContext; // ivar: _hostedViewContext
@property (readonly, nonatomic) NSUInteger interactiveBehavior; // ivar: _interactiveBehavior
@property (readonly, copy, nonatomic) NSSet *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameters:(id)arg0 interactiveBehavior:(NSUInteger)arg1 hostedViewContext:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif