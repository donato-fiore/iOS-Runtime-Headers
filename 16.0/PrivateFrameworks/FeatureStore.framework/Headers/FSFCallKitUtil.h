// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FSFCALLKITUTIL_H
#define FSFCALLKITUTIL_H

@class CXCallObserver;

#import <Foundation/Foundation.h>


@interface FSFCallKitUtil : NSObject

@property (readonly, nonatomic) CXCallObserver *callCenter; // ivar: _callCenter


+(id)sharedInstance;
-(BOOL)isOnCall;
-(id)init;


@end


#endif