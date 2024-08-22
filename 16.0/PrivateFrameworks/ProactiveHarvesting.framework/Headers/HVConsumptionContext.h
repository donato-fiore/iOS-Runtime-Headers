// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVCONSUMPTIONCONTEXT_H
#define HVCONSUMPTIONCONTEXT_H

@class _PASLazyResult, NSString;
@protocol BMIdentifiableContentEvent;

#import <Foundation/Foundation.h>

#import "HVHtmlParser.h"

@interface HVConsumptionContext : NSObject {
    id *_scheduledTaskShouldContinueBlock;
    _PASLazyResult *_cachedParser;
}


@property (readonly, nonatomic) NSObject<BMIdentifiableContentEvent> *content; // ivar: _content
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) HVHtmlParser *htmlParser;


-(BOOL)shouldContinue;
-(id)_parseHtmlContentIfAvailable;
-(id)description;
-(id)initWithContent:(id)arg0 contentProtection:(id)arg1 scheduledTaskShouldContinueBlock:(id)arg2 ;


@end


#endif