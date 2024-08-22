// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSGCORNERGESTUREDEFAULTS_H
#define PSGCORNERGESTUREDEFAULTS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface PSGCornerGestureDefaults : NSObject {
    NSUserDefaults *_defaults;
}


@property (readonly, nonatomic) BOOL anyCornerGestureAllowsDirectTouches;
@property (nonatomic) NSInteger bottomLeftFeature;
@property (nonatomic) NSUInteger bottomLeftTouchTypes;
@property (nonatomic) NSInteger bottomRightFeature;
@property (nonatomic) NSUInteger bottomRightTouchTypes;


-(id)init;


@end


#endif