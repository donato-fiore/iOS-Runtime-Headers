// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBSOFTWAKEAABCDELEGATE_H
#define CBSOFTWAKEAABCDELEGATE_H


#import <Foundation/Foundation.h>


@interface CBSoftWakeAABCDelegate : NSObject {
    NSInteger _state;
}


@property (readonly, nonatomic) CustomCurve curve; // ivar: _curve


+(BOOL)isSupported;
-(BOOL)isActive;
-(NSInteger)action:(NSInteger)arg0 ;
-(id)init;


@end


#endif