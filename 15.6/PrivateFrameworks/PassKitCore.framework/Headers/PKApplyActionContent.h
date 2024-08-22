// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLYACTIONCONTENT_H
#define PKAPPLYACTIONCONTENT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKApplyFooterContent.h"

@interface PKApplyActionContent : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *actionItems; // ivar: _actionItems
@property (readonly, nonatomic) PKApplyFooterContent *footerContent; // ivar: _footerContent


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif