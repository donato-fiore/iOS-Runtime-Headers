// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDFIXEDMODEPROVIDER_H
#define MDFIXEDMODEPROVIDER_H

@protocol MDModeProviding;

#import <Foundation/Foundation.h>


@interface MDFixedModeProvider : NSObject <MDModeProviding>

 {
    NSUInteger _fixedMode;
}




-(NSUInteger)currentMode;
-(id)initWithFixedMode:(NSUInteger)arg0 ;


@end


#endif