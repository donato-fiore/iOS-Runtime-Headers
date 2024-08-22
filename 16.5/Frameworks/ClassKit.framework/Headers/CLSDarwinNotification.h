// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSDARWINNOTIFICATION_H
#define CLSDARWINNOTIFICATION_H

@class NSString, NSDictionary;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface CLSDarwinNotification : NSObject

@property (readonly) id *block; // ivar: _block
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, weak) NSObject<NSObject> *observer; // ivar: _observer
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithObserver:(id)arg0 name:(id)arg1 block:(id)arg2 ;


@end


#endif