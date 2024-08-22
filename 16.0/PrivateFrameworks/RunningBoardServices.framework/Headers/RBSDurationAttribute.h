// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSDURATIONATTRIBUTE_H
#define RBSDURATIONATTRIBUTE_H



#import "RBSAttribute.h"

@interface RBSDurationAttribute : RBSAttribute

@property (nonatomic) NSUInteger endPolicy; // ivar: _endPolicy
@property (nonatomic) CGFloat invalidationDuration; // ivar: _invalidationDuration
@property (nonatomic) NSUInteger startPolicy; // ivar: _startPolicy
@property (nonatomic) CGFloat warningDuration; // ivar: _warningDuration


+(id)attributeWithDuration:(CGFloat)arg0 ;
+(id)attributeWithDuration:(CGFloat)arg0 warningDuration:(CGFloat)arg1 startPolicy:(NSUInteger)arg2 endPolicy:(NSUInteger)arg3 ;
+(id)invalidateAfterInterval:(CGFloat)arg0 ;
+(id)terminateAfterInterval:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif