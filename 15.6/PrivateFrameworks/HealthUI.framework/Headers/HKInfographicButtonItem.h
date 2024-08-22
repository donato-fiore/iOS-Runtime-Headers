// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINFOGRAPHICBUTTONITEM_H
#define HKINFOGRAPHICBUTTONITEM_H

@class NSString;
@protocol HKInfographicItem;

#import <Foundation/Foundation.h>


@interface HKInfographicButtonItem : NSObject <HKInfographicItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didTapButton; // ivar: _didTapButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *titleString; // ivar: _titleString


-(id)initWithTitle:(id)arg0 didTapButton:(id)arg1 ;


@end


#endif