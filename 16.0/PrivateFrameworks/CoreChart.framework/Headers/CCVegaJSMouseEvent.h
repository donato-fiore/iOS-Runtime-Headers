// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGAJSMOUSEEVENT_H
#define CCVEGAJSMOUSEEVENT_H

@protocol CCVegaJSMouseEventInterface;

#import <Foundation/Foundation.h>


@interface CCVegaJSMouseEvent : NSObject <CCVegaJSMouseEventInterface>



@property (nonatomic) CGFloat clientX; // ivar: clientX
@property (nonatomic) CGFloat clientY; // ivar: clientY
@property (nonatomic) BOOL defaultPrevented; // ivar: defaultPrevented
@property (nonatomic) BOOL isConsumed; // ivar: isConsumed
@property (nonatomic) CGFloat movementX; // ivar: movementX
@property (nonatomic) CGFloat movementY; // ivar: movementY
@property (nonatomic) BOOL propagationStopped; // ivar: propagationStopped


-(id)initWithLocation:(struct CGPoint )arg0 movement:(struct CGPoint )arg1 ;
-(void)preventDefault;
-(void)stopPropagation;


@end


#endif