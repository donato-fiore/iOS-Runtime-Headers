// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKSERVERFORMATTEDSTRINGPARAMETERS_H
#define MKSERVERFORMATTEDSTRINGPARAMETERS_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) ? options; // ivar: _options
@property (readonly, copy, nonatomic) NSDictionary *variableOverrides; // ivar: _variableOverrides


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToServerFormattedStringParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInstructionsDistanceDetailLevel:(NSInteger)arg0 variableOverrides:(id)arg1 ;
-(id)initWithOptions:(struct ? )arg0 variableOverrides:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif