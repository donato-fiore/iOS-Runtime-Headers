// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDOMHTMLOPTGROUPSELECTEDITEM_H
#define UIDOMHTMLOPTGROUPSELECTEDITEM_H

@class DOMHTMLOptGroupElement;
@protocol UIWebSelectedItemPrivate;

#import <Foundation/Foundation.h>


@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>



@property (retain, nonatomic) DOMHTMLOptGroupElement *_node; // ivar: _node


-(BOOL)isGroup;
-(BOOL)selected;
-(id)initWithHTMLOptGroupNode:(id)arg0 ;
-(id)node;
-(void)dealloc;
-(void)setSelected:(BOOL)arg0 ;
-(void)unselect;


@end


#endif