// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSSHOWMORECONTACTSCELL_H
#define CKDETAILSSHOWMORECONTACTSCELL_H

@class NSString;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsShowMoreContactsCell : CKDetailsCell <CKDetailsCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(CGFloat)preferredHeight;
+(Class)cellClass;
+(id)reuseIdentifier;


@end


#endif