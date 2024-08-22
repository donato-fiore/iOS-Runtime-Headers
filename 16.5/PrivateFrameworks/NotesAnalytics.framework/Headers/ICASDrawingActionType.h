// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASDRAWINGACTIONTYPE_H
#define ICASDRAWINGACTIONTYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASDrawingActionType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger drawingActionType; // ivar: _drawingActionType


-(id)initWithDrawingActionType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif