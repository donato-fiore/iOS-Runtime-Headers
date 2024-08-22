// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXONBOARDINGSTACKRESULT_H
#define ATXONBOARDINGSTACKRESULT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXDefaultWidgetStack.h"

@interface ATXOnboardingStackResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) ATXDefaultWidgetStack *stack1; // ivar: _stack1
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack2; // ivar: _stack2


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStack1:(id)arg0 stack2:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif