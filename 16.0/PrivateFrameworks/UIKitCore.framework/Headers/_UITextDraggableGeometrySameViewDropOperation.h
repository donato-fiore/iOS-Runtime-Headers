// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTDRAGGABLEGEOMETRYSAMEVIEWDROPOPERATION_H
#define _UITEXTDRAGGABLEGEOMETRYSAMEVIEWDROPOPERATION_H

@class NSString, NSArray, NSAttributedString;
@protocol UITextDraggableGeometrySameViewDropOperation;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger operation; // ivar: _operation
@property (retain, nonatomic) NSArray *sourceRanges; // ivar: _sourceRanges
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextRange *targetRange; // ivar: _targetRange
@property (retain, nonatomic) NSAttributedString *text; // ivar: _text




@end


#endif