// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLEATTACHMENT_H
#define WFVARIABLEATTACHMENT_H

@class NSTextAttachment, UIFont, NSString, UIColor, WFVariable;
@protocol WFVariableDelegate, NSCopying;


#import "WFVariableAttachmentCell.h"

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>



@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (copy, nonatomic) NSString *overrideVariableName; // ivar: _overrideVariableName
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) UIFont *surroundingTextFont; // ivar: _surroundingTextFont
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable
@property (retain, nonatomic) WFVariableAttachmentCell *wf_attachmentCell; // ivar: _wf_attachmentCell


-(id)accessibilityLabel;
-(id)attachmentCell;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithVariable:(id)arg0 ;
-(void)dealloc;
-(void)variableDidChange:(id)arg0 ;


@end


#endif