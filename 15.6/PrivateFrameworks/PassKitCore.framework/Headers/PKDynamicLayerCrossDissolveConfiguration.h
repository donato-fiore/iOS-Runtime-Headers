// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDYNAMICLAYERCROSSDISSOLVECONFIGURATION_H
#define PKDYNAMICLAYERCROSSDISSOLVECONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKDynamicLayerCrossDissolveConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger intensity; // ivar: _intensity


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif