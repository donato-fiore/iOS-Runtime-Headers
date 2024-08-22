// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFACTIVITY_H
#define CWFACTIVITY_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFActivity : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSUInteger timeout; // ivar: _timeout
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)activityWithType:(NSInteger)arg0 reason:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActivity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif