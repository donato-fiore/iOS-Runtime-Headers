// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSTATUSITEMUPDATE_H
#define HFSTATUSITEMUPDATE_H

@class NSString;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>

#import "HFNumberRange.h"

@interface HFStatusItemUpdate : NSObject {
    ? _title;
    ? _secondaryText;
    ? _iconDescriptor;
    ? _currentValue;
    ? _possibleValues;
}


@property (nonatomic, retain) HFNumberRange *currentValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSObject<HFIconDescriptor> *iconDescriptor;
@property (nonatomic, retain) HFNumberRange *possibleValues;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *title;


-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 secondaryText:(id)arg1 iconDescriptor:(id)arg2 ;


@end


#endif