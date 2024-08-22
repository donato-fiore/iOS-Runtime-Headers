// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDVISIONSIGNALGRADINGDATACOLLECTIONTASK_H
#define _CDVISIONSIGNALGRADINGDATACOLLECTIONTASK_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "VisionSignalGradingVisionGradeEvent.h"

@interface _CDVisionSignalGradingDataCollectionTask : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (retain, nonatomic) VisionSignalGradingVisionGradeEvent *event; // ivar: _event
@property (readonly, nonatomic) NSString *file; // ivar: _file


-(id)eventFromDict:(id)arg0 ;
-(id)eventFromFile:(id)arg0 ;
-(id)initWithFile:(id)arg0 activity:(id)arg1 ;
-(void)execute;


@end


#endif