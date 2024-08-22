// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONREFERENCE_H
#define SCNACTIONREFERENCE_H

@class NSString;


#import "SCNActionGroup.h"

@interface SCNActionReference : SCNActionGroup

@property (copy, nonatomic) NSString *referenceName; // ivar: referenceName


-(BOOL)_isAReference;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif