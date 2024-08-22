// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTDRAGREQUEST_H
#define UITEXTDRAGREQUEST_H

@class NSString, NSArray;
@protocol UITextDragRequest, UIDragSession;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface UITextDragRequest : NSObject <UITextDragRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITextRange *dragRange; // ivar: _dragRange
@property (readonly, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (readonly, nonatomic) NSArray *existingItems; // ivar: _existingItems
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) NSArray *suggestedItems; // ivar: _suggestedItems
@property (readonly) Class superclass;


-(id)initWithRange:(id)arg0 inSession:(id)arg1 ;


@end


#endif