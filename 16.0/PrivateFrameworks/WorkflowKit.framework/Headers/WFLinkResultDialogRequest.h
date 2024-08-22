// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKRESULTDIALOGREQUEST_H
#define WFLINKRESULTDIALOGREQUEST_H

@class CATResult, WFDialogButton, LNSuccessResult;
@protocol NSSecureCoding;


#import "WFLinkSnippetDialogRequest.h"

@interface WFLinkResultDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>



@property (retain, nonatomic) CATResult *catResult; // ivar: _catResult
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton
@property (readonly, copy, nonatomic) LNSuccessResult *result; // ivar: _result


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuccessResult:(id)arg0 attribution:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCATResultWithCompletionHandler:(id)arg0 ;


@end


#endif