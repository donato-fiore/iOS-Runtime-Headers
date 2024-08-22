// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSOPTIONAL_H
#define VSOPTIONAL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSOptional : NSObject <NSSecureCoding>



@property (retain, nonatomic) id *object; // ivar: _object


+(BOOL)supportsSecureCoding;
+(id)decodableClasses;
+(id)optionalWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)forceUnwrapObject;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)unwrapWithFallback:(id)arg0 ;
-(void)conditionallyUnwrapObject:(id)arg0 ;
// -(void)conditionallyUnwrapObject:(id)arg0 otherwise:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif