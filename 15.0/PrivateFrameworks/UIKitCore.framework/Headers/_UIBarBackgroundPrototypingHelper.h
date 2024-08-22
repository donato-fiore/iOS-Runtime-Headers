// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBARBACKGROUNDPROTOTYPINGHELPER_H
#define _UIBARBACKGROUNDPROTOTYPINGHELPER_H

@class NSMutableArray, NSString;
@protocol PTSettingsKeyObserver;

#import <Foundation/Foundation.h>


@interface _UIBarBackgroundPrototypingHelper : NSObject <PTSettingsKeyObserver>

 {
    NSMutableArray *_callbacks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif