// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDIALOGRESULT_H
#define AMSDIALOGRESULT_H

@class NSString, NSArray, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSDialogRequest.h"

@interface AMSDialogResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) AMSDialogRequest *originalRequest; // ivar: _originalRequest
@property (copy, nonatomic) NSString *selectedActionIdentifier; // ivar: _selectedActionIdentifier
@property (copy, nonatomic) NSArray *textfieldValues; // ivar: _textfieldValues
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalRequest:(id)arg0 selectedActionIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif