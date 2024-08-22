// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTASKIDENTIFIER_H
#define WFTASKIDENTIFIER_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFTaskIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processName; // ivar: _processName


+(BOOL)supportsSecureCoding;
+(id)defaultIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif