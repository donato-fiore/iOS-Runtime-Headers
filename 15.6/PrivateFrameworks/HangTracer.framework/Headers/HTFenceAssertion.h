// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HTFENCEASSERTION_H
#define HTFENCEASSERTION_H


#import <Foundation/Foundation.h>


@interface HTFenceAssertion : NSObject {
    NSUInteger __name;
    NSUInteger __startTime;
}




-(id)initWithFenceName:(NSUInteger)arg0 ;
-(void)blown;
-(void)invalidate;


@end


#endif