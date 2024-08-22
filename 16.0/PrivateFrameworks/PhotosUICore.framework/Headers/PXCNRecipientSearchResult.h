// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCNRECIPIENTSEARCHRESULT_H
#define PXCNRECIPIENTSEARCHRESULT_H

@class NSString;
@protocol PXRecipientSearchResult;


#import "PXCNComposeRecipient.h"

@interface PXCNRecipientSearchResult : PXCNComposeRecipient <PXRecipientSearchResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger validationType; // ivar: _validationType


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif