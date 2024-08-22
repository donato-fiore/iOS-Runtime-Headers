// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPHOMECONTROLSUGGESTION_H
#define ARPHOMECONTROLSUGGESTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ARPHomeControlSuggestion : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accessoryServiceUUID; // ivar: _accessoryServiceUUID
@property (nonatomic) CGFloat computedScore; // ivar: _computedScore
@property (copy, nonatomic) NSString *homeUUID; // ivar: _homeUUID
@property (nonatomic) CGFloat score; // ivar: _score
@property (copy, nonatomic) NSString *suggestionReason; // ivar: _suggestionReason
@property (copy, nonatomic) NSString *targetUUID; // ivar: _targetUUID
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeUUID:(id)arg0 targetUUID:(id)arg1 accessoryServiceUUID:(id)arg2 type:(NSInteger)arg3 score:(CGFloat)arg4 computedScore:(CGFloat)arg5 suggestionReason:(id)arg6 ;
-(id)initWithHomeUUID:(id)arg0 targetUUID:(id)arg1 accessoryServiceUUID:(id)arg2 type:(NSInteger)arg3 score:(CGFloat)arg4 suggestionReason:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif