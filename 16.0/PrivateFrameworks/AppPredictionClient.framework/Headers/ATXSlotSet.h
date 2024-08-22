// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSLOTSET_H
#define ATXSLOTSET_H

@class NSSet, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding>

 {
    unsigned int _hash;
}


@property (readonly, nonatomic) NSSet *parameters; // ivar: _parameters
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSlotSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOpaqueParameters;
-(id)initWithOpaqueParametersUuid:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithParameters:(id)arg0 uuid:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif