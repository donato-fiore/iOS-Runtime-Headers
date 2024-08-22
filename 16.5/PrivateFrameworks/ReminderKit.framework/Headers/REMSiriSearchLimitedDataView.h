// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMSIRISEARCHLIMITEDDATAVIEW_H
#define REMSIRISEARCHLIMITEDDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMSiriSearchLimitedDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)fetchRemindersMatchingTitle:(id)arg0 dueAfter:(id)arg1 dueBefore:(id)arg2 isCompleted:(id)arg3 hasLocation:(id)arg4 location:(id)arg5 error:(*id)arg6 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif