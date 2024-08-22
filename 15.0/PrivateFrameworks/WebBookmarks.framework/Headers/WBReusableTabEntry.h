// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBREUSABLETABENTRY_H
#define WBREUSABLETABENTRY_H

@class NSDate;
@protocol WBReusableTab;

#import <Foundation/Foundation.h>


@interface WBReusableTabEntry : NSObject

@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSObject<WBReusableTab> *reusableTab; // ivar: _reusableTab


-(id)initWithReusableTab:(id)arg0 ;


@end


#endif