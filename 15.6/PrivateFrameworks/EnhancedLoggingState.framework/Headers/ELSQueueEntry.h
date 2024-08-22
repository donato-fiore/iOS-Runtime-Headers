// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ELSQUEUEENTRY_H
#define ELSQUEUEENTRY_H

@class NSDictionary, NSString;
@protocol NSCopying, NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ELSQueueEntry : NSObject <NSCopying, NSCoding, NSSecureCoding>



@property (nonatomic) CGFloat executeAfterDuration; // ivar: _executeAfterDuration
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (nonatomic) BOOL retry; // ivar: _retry
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) NSString *typeName; // ivar: _typeName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 typeName:(id)arg1 parameters:(id)arg2 executeAfterDuration:(CGFloat)arg3 retry:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif