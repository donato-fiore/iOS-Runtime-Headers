// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCHIDINPUTELEMENT_H
#define GCHIDINPUTELEMENT_H

@class HIDElement;

#import <Foundation/Foundation.h>


@interface GCHIDInputElement : NSObject {
    ObserverList _observers;
    Observer _firstObserver;
}


@property (readonly) HIDElement *element; // ivar: _element
@property (readonly, nonatomic) *__IOHIDValue value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)scaledValue:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithElement:(id)arg0 ;
-(id)registerScaled:(NSInteger)arg0 valueChangedHandler:(id)arg1 ;
-(id)registerValueChangedHandler:(id)arg0 ;
-(void)addScaled:(NSInteger)arg0 valueChangedHandler:(id)arg1 ;
-(void)addValueChangedHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif