// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIELEMENTASSERTION_H
#define SAUIELEMENTASSERTION_H

@class SAAssertion;
@protocol SAElement;



@interface SAUIElementAssertion : SAAssertion

@property (readonly, weak, nonatomic) NSObject<SAElement> *element; // ivar: _element
@property (nonatomic) NSInteger invalidationLayoutModeChangeReason; // ivar: _invalidationLayoutModeChangeReason


-(id)_descriptionConstituents;
-(id)initWithElement:(id)arg0 invalidationHandler:(id)arg1 ;
-(void)invalidateWithReason:(id)arg0 layoutModeChangeReason:(NSInteger)arg1 ;


@end


#endif