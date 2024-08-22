// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNEMAILADDRESSSANITIZATIONTASK_H
#define CNEMAILADDRESSSANITIZATIONTASK_H

@class NSString;


#import "CNTask.h"

@interface CNEmailAddressSanitizationTask : CNTask {
    NSString *_address;
}




-(id)description;
-(id)initWithAddress:(id)arg0 ;
-(id)run:(*id)arg0 ;
-(void)removeMailtoPrefix;


@end


#endif