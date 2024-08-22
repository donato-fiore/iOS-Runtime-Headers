// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKONBOARDINGPAGE_H
#define HKONBOARDINGPAGE_H


#import <Foundation/Foundation.h>


@interface HKOnboardingPage : NSObject

@property (nonatomic) BOOL lastPage; // ivar: _lastPage
@property (readonly, nonatomic) NSInteger sequencePage; // ivar: _sequencePage
@property (readonly, nonatomic) Class viewControllerClass; // ivar: _viewControllerClass


-(id)initWithViewControllerClass:(Class)arg0 sequencePage:(NSInteger)arg1 ;


@end


#endif