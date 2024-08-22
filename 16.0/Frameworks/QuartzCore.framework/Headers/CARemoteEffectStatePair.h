// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAREMOTEEFFECTSTATEPAIR_H
#define CAREMOTEEFFECTSTATEPAIR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CARemoteEffectStatePair : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *fromState; // ivar: _fromState
@property (readonly, nonatomic) NSString *toState; // ivar: _toState


+(BOOL)supportsSecureCoding;
+(id)pairWithFromState:(id)arg0 toState:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif