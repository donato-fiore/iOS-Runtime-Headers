// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDOCUMENTCONTEXTDATACONFIRMATIONDIALOG_H
#define VUIDOCUMENTCONTEXTDATACONFIRMATIONDIALOG_H

@class NSString;


#import "VUIDocumentContextData.h"

@interface VUIDocumentContextDataConfirmationDialog : VUIDocumentContextData

@property (copy, nonatomic) NSString *confirmationDialogType; // ivar: _confirmationDialogType
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)jsonData;


@end


#endif