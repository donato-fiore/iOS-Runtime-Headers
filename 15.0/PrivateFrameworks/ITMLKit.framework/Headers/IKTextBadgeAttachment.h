// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKTEXTBADGEATTACHMENT_H
#define IKTEXTBADGEATTACHMENT_H

@class NSTextAttachment;


#import "IKBadgeElement.h"
#import "IKColor.h"

@interface IKTextBadgeAttachment : NSTextAttachment

@property (readonly, weak, nonatomic) IKBadgeElement *badge; // ivar: _badge
@property (retain, nonatomic) IKColor *tintColor; // ivar: _tintColor


-(id)initWithBadgeElement:(id)arg0 ;


@end


#endif