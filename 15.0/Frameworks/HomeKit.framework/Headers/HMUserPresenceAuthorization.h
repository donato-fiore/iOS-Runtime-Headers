// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERPRESENCEAUTHORIZATION_H
#define HMUSERPRESENCEAUTHORIZATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMUserPresenceAuthorization : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)authWithCoder:(id)arg0 ;
+(id)authWithDict:(id)arg0 ;
+(id)authWithMessage:(id)arg0 ;
+(id)authWithNumber:(id)arg0 ;
+(id)authWithValue:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithNumber:(id)arg0 ;
-(void)addToCoder:(id)arg0 ;
-(void)addToPayload:(id)arg0 ;


@end


#endif