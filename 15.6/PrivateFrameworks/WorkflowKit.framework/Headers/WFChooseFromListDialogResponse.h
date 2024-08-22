// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCHOOSEFROMLISTDIALOGRESPONSE_H
#define WFCHOOSEFROMLISTDIALOGRESPONSE_H

@class NSArray;
@protocol NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFChooseFromListDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, nonatomic) NSArray *selectedItems; // ivar: _selectedItems


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif