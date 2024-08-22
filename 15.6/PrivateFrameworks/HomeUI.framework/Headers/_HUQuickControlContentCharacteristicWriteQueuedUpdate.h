// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HUQUICKCONTROLCONTENTCHARACTERISTICWRITEQUEUEDUPDATE_H
#define _HUQUICKCONTROLCONTENTCHARACTERISTICWRITEQUEUEDUPDATE_H

@class NSMutableSet;
@protocol NACancelable;

#import <Foundation/Foundation.h>


@interface _HUQuickControlContentCharacteristicWriteQueuedUpdate : NSObject

@property (readonly, nonatomic) NSMutableSet *affectedCharacteristics; // ivar: _affectedCharacteristics
@property (readonly, nonatomic) NSObject<NACancelable> *cancellationToken; // ivar: _cancellationToken


-(id)initWithCancellationToken:(id)arg0 ;


@end


#endif