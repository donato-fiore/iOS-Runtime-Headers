// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSMOUSEPOINTERPREFERENCESOBSERVERINFO_H
#define BKSMOUSEPOINTERPREFERENCESOBSERVERINFO_H

@protocol BKSMousePointerPreferencesObserver;

#import <Foundation/Foundation.h>


@interface BKSMousePointerPreferencesObserverInfo : NSObject

@property (weak, nonatomic) NSObject<BKSMousePointerPreferencesObserver> *observer; // ivar: _observer




@end


#endif