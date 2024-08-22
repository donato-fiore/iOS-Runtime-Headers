// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKRESOURCEMANAGER_H
#define VKRESOURCEMANAGER_H

@class NSBundle;

#import <Foundation/Foundation.h>


@interface VKResourceManager : NSObject {
    NSBundle *_vkBundle;
}




-(BOOL)isDevResourceWithName:(id)arg0 ;
-(id)_localNameForResourceName:(id)arg0 ;
-(id)dataForResourceWithName:(id)arg0 ;
-(id)dataForResourceWithName:(id)arg0 fallbackNameHandler:(id)arg1 ;
-(id)init;
-(id)pathForResourceWithName:(id)arg0 ;


@end


#endif