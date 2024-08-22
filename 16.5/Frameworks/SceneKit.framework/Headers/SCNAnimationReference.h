// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNANIMATIONREFERENCE_H
#define SCNANIMATIONREFERENCE_H

@class CAAnimationGroup, NSString;



@interface SCNAnimationReference : CAAnimationGroup

@property (copy, nonatomic) NSString *referenceName; // ivar: referenceName


-(BOOL)_isAReference;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif