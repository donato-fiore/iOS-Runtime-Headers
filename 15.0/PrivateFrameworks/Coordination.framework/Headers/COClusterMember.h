// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COCLUSTERMEMBER_H
#define COCLUSTERMEMBER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface COClusterMember : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger memberType; // ivar: _memberType


+(BOOL)supportsSecureCoding;
+(id)memberForCurrentDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMember:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 identifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif