// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NAUIAUTOUPDATINGFONTOBSERVER_H
#define _NAUIAUTOUPDATINGFONTOBSERVER_H


#import <Foundation/Foundation.h>


@interface _NAUIAutoUpdatingFontObserver : NSObject {
    id *_notificationObserver;
}


@property (readonly, weak, nonatomic) id *target; // ivar: _target


+(BOOL)canObserveFontsForTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(void)dealloc;
-(void)updateDyamicFontForCurrentContentSize;


@end


#endif