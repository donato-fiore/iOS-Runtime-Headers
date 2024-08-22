// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICTITLEDETAILOPTIONALBUTTONITEM_H
#define HKINFOGRAPHICTITLEDETAILOPTIONALBUTTONITEM_H

@class NSString;
@protocol HKInfographicItem;

#import <Foundation/Foundation.h>


@interface HKInfographicTitleDetailOptionalButtonItem : NSObject <HKInfographicItem>



@property (readonly, copy, nonatomic) id *buttonAction; // ivar: _buttonAction
@property (readonly, copy, nonatomic) NSString *buttonTextString; // ivar: _buttonTextString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *detailString; // ivar: _detailString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *titleString; // ivar: _titleString


-(id)initWithTitle:(id)arg0 detail:(id)arg1 buttonTextString:(id)arg2 buttonAction:(id)arg3 ;


@end


#endif