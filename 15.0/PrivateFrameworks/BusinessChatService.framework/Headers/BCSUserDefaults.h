// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSUSERDEFAULTS_H
#define BCSUSERDEFAULTS_H

@class NSUserDefaults, NSString;
@protocol BCSUserDefaultsProviding;



@interface BCSUserDefaults : NSUserDefaults <BCSUserDefaultsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDefaults;


@end


#endif