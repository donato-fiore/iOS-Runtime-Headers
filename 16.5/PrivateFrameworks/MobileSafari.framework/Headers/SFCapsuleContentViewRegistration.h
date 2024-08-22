// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCAPSULECONTENTVIEWREGISTRATION_H
#define SFCAPSULECONTENTVIEWREGISTRATION_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface SFCapsuleContentViewRegistration : NSObject {
    NSMutableSet *_views;
    id *_createViewBlock;
}




-(id)createOrDequeueViewWithExistingView:(id)arg0 ;
-(id)initWithCreateViewBlock:(id)arg0 ;
-(void)discardView:(id)arg0 ;
-(void)enqueueView:(id)arg0 ;


@end


#endif