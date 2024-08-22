// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOBJECTPICKERDETAILITEM_H
#define HKOBJECTPICKERDETAILITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKObjectPickerDetailItem : NSObject

@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText


-(id)initWithPrimaryText:(id)arg0 secondaryText:(id)arg1 ;


@end


#endif