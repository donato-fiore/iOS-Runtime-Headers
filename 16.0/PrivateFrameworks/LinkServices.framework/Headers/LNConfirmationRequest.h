// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNCONFIRMATIONREQUEST_H
#define LNCONFIRMATIONREQUEST_H

@class LNDialog, NSUUID, NSString, LNValue;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNViewSnippet.h"

@interface LNConfirmationRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) LNDialog *dialog; // ivar: _dialog
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *parameterName; // ivar: _parameterName
@property (readonly, nonatomic) LNValue *value; // ivar: _value
@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet; // ivar: _viewSnippet


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parameterName:(id)arg1 value:(id)arg2 dialog:(id)arg3 viewSnippet:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)respondWithConfirmation:(BOOL)arg0 ;
-(void)respondWithError:(id)arg0 ;


@end


#endif