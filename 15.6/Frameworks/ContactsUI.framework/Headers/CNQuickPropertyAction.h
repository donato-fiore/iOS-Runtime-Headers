// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNQUICKPROPERTYACTION_H
#define CNQUICKPROPERTYACTION_H



#import "CNQuickContactAction.h"
#import "CNPropertyAction.h"

@interface CNQuickPropertyAction : CNQuickContactAction

@property (readonly, nonatomic) CNPropertyAction *propertyAction;


-(BOOL)enabled;
-(NSUInteger)score;
-(id)_coreDuetValue;
-(id)identifier;
-(id)initWithPropertyAction:(id)arg0 ;
-(id)propertyItem;
-(id)subtitleForContext:(NSInteger)arg0 ;
-(id)titleForContext:(NSInteger)arg0 ;
-(void)performWithCompletionBlock:(id)arg0 ;


@end


#endif