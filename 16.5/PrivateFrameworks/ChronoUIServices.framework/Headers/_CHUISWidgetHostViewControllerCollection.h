// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CHUISWIDGETHOSTVIEWCONTROLLERCOLLECTION_H
#define _CHUISWIDGETHOSTVIEWCONTROLLERCOLLECTION_H

@class NSHashTable, NSArray;

#import <Foundation/Foundation.h>


@interface _CHUISWidgetHostViewControllerCollection : NSObject {
    os_unfair_lock_s _lock;
    NSHashTable *_lock_viewControllers;
}


@property (readonly, copy, nonatomic) NSArray *viewControllers;


+(id)sharedInstance;
-(id)init;
-(void)noteCreated:(id)arg0 ;
-(void)noteDestroyed:(id)arg0 ;


@end


#endif