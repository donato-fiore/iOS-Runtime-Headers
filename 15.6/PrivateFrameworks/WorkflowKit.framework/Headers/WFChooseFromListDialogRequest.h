// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCHOOSEFROMLISTDIALOGREQUEST_H
#define WFCHOOSEFROMLISTDIALOGREQUEST_H

@class NSString, NSArray;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFChooseFromListDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton
@property (readonly, copy, nonatomic) NSString *emptyStateMessage;
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 allowsMultipleSelection:(BOOL)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif