// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERDYNAMICCONTENTSECTION_H
#define PKPAYLATERDYNAMICCONTENTSECTION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PKApplyFooterContent.h"

@interface PKPayLaterDynamicContentSection : NSObject

@property (copy, nonatomic) PKApplyFooterContent *footerContent; // ivar: _footerContent
@property (copy, nonatomic) NSArray *rows; // ivar: _rows


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif