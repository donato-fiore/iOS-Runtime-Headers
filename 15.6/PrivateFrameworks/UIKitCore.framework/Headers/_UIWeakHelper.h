// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIWEAKHELPER_H
#define _UIWEAKHELPER_H


#import <Foundation/Foundation.h>


@interface _UIWeakHelper : NSObject

@property (copy, nonatomic) id *deallocationBlock; // ivar: _deallocationBlock


-(id)initWithDeallocationBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif