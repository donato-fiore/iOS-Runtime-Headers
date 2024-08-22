// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOICATEGORYENTERANDEXITEVENTS_H
#define ATXPOICATEGORYENTERANDEXITEVENTS_H

@class NSArray, BMStoreEvent;

#import <Foundation/Foundation.h>


@interface ATXPOICategoryEnterAndExitEvents : NSObject

@property (readonly, nonatomic) NSArray *categoryEnterEvents; // ivar: _categoryEnterEvents
@property (readonly, nonatomic) BMStoreEvent *exitEvent; // ivar: _exitEvent


-(id)initWithCategoryEvents:(id)arg0 exitEvent:(id)arg1 ;
-(id)visitEvent;
-(id)visitEventAllowingMissingExit:(BOOL)arg0 ;


@end


#endif