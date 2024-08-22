// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTINTERACTABLELINK_H
#define _UITEXTINTERACTABLELINK_H

@class UITextInteractableItem, LSAppLink, NSURL;



@interface _UITextInteractableLink : UITextInteractableItem

@property (retain, nonatomic) LSAppLink *appLink; // ivar: _appLink
@property (retain, nonatomic) NSURL *link; // ivar: _link


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLink;


@end


#endif