// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFALARMDIFF_H
#define HFALARMDIFF_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface HFAlarmDiff : NSObject

@property (copy, nonatomic) NSSet *addedAlarms; // ivar: _addedAlarms
@property (copy, nonatomic) NSSet *deletedAlarms; // ivar: _deletedAlarms
@property (readonly, nonatomic) BOOL inputWasEqual;
@property (copy, nonatomic) NSSet *unmodifiedAlarms; // ivar: _unmodifiedAlarms
@property (copy, nonatomic) NSSet *updatedAlarms; // ivar: _updatedAlarms


+(id)generateAlarmDiffFromSet:(id)arg0 toSet:(id)arg1 ;
-(id)description;


@end


#endif