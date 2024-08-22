// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKVERIFIABLECLINICALRECORDDISPLAYITEM_H
#define HKVERIFIABLECLINICALRECORDDISPLAYITEM_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface HKVerifiableClinicalRecordDisplayItem : NSObject

@property (retain, nonatomic) NSAttributedString *attributedDetailText; // ivar: _attributedDetailText
@property (retain, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) NSInteger subtitleStyle; // ivar: _subtitleStyle
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) NSInteger type; // ivar: _type


+(id)subtitleItemWithTitleText:(id)arg0 detailText:(id)arg1 style:(NSInteger)arg2 ;
+(id)valueItemWithTitleText:(id)arg0 attributedDetailText:(id)arg1 ;
+(id)valueItemWithTitleText:(id)arg0 detailText:(id)arg1 ;


@end


#endif