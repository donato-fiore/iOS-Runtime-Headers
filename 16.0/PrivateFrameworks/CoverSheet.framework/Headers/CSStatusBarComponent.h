// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSTATUSBARCOMPONENT_H
#define CSSTATUSBARCOMPONENT_H

@class NSNumber;


#import "CSComponent.h"

@interface CSStatusBarComponent : CSComponent

@property (nonatomic) NSInteger fakeStatusBar;
@property (nonatomic) NSNumber *fakeStatusBarLevel;


-(id)fakeStatusBar:(NSInteger)arg0 ;
-(id)fakeStatusBarLevel:(id)arg0 ;
-(id)init;


@end


#endif