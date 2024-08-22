// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCUSTOMINTENTDESCRIPTION_H
#define ATXCUSTOMINTENTDESCRIPTION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXCustomIntentDescription : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NSString *typeName; // ivar: _typeName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)createIntent;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeName:(id)arg0 parameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif