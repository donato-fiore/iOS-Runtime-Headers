// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSCOPYACTIONPICKERITEM_H
#define BCSCOPYACTIONPICKERITEM_H

@class NSString, NSURL;


#import "BCSActionPickerItem.h"

@interface BCSCopyActionPickerItem : BCSActionPickerItem

@property (readonly, copy, nonatomic) NSString *textToCopy; // ivar: _textToCopy
@property (readonly, copy, nonatomic) NSURL *urlToCopy; // ivar: _urlToCopy


-(BOOL)isCopyActionItem;
-(id)icon;
-(id)initWithAction:(id)arg0 textToCopy:(id)arg1 ;
-(id)initWithAction:(id)arg0 urlToCopy:(id)arg1 ;
-(void)performActionWithFBOptions:(id)arg0 ;


@end


#endif