// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASDRAWINGDATA_H
#define ICASDRAWINGDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASDrawingActionType.h"
#import "ICASDrawingTool.h"

@interface ICASDrawingData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASDrawingActionType *drawingActionType; // ivar: _drawingActionType
@property (readonly, nonatomic) NSString *drawingID; // ivar: _drawingID
@property (readonly, nonatomic) ICASDrawingTool *drawingTool; // ivar: _drawingTool


+(id)dataName;
-(id)initWithDrawingActionType:(id)arg0 drawingTool:(id)arg1 drawingID:(id)arg2 ;
-(id)toDict;


@end


#endif