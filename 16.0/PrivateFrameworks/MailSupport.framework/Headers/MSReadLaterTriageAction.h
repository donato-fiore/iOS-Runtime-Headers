// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSREADLATERTRIAGEACTION_H
#define MSREADLATERTRIAGEACTION_H

@class NSDate;


#import "MSTriageAction.h"

@interface MSReadLaterTriageAction : MSTriageAction

@property (retain, nonatomic) NSDate *readLaterDate; // ivar: _readLaterDate


-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 readLaterDate:(id)arg2 ;


@end


#endif