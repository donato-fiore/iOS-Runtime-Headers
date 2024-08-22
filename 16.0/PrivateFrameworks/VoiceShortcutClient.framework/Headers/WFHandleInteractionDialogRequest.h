// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHANDLEINTERACTIONDIALOGREQUEST_H
#define WFHANDLEINTERACTIONDIALOGREQUEST_H

@class INInteraction;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFHandleInteractionDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton
@property (readonly, copy, nonatomic) INInteraction *interaction; // ivar: _interaction


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteraction:(id)arg0 attribution:(id)arg1 ;
-(id)initWithInteraction:(id)arg0 prompt:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif