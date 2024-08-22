// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTITEM_H
#define _UITEXTITEM_H

@class NSTextAttachment, NSString, NSURL, NSArray;
@protocol UITextItem, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UITextItem : NSObject <UITextItem>



@property (retain, nonatomic) NSTextAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *link; // ivar: _link
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSArray *rects; // ivar: _rects
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif