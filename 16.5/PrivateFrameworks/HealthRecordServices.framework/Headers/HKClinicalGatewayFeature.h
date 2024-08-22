// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALGATEWAYFEATURE_H
#define HKCLINICALGATEWAYFEATURE_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalGatewayFeature : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *interactions; // ivar: _interactions
@property (readonly, nonatomic) NSInteger minCompatibleAPIVersion; // ivar: _minCompatibleAPIVersion
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 minCompatibleAPIVersion:(NSInteger)arg1 status:(NSInteger)arg2 interactions:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif