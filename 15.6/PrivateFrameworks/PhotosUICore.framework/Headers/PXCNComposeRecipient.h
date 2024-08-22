// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCNCOMPOSERECIPIENT_H
#define PXCNCOMPOSERECIPIENT_H

@class CNComposeRecipient;


#import "PXRecipient.h"

@interface PXCNComposeRecipient : PXRecipient

@property (readonly, nonatomic) CNComposeRecipient *recipient; // ivar: _recipient


-(id)description;
-(id)initWithContact:(id)arg0 address:(id)arg1 nameComponents:(id)arg2 recipientKind:(NSInteger)arg3 ;
-(id)initWithRecipient:(id)arg0 ;


@end


#endif