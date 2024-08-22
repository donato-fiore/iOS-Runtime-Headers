// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSUSERTYPEDFORMSTRING_H
#define WBSUSERTYPEDFORMSTRING_H

@class NSString;
@protocol WBSFormAutoFillItem;

#import <Foundation/Foundation.h>


@interface WBSUserTypedFormString : NSObject <WBSFormAutoFillItem>



@property (readonly, nonatomic) NSString *completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userTypedString; // ivar: _userTypedString


-(id)initWithUserTypedString:(id)arg0 ;


@end


#endif