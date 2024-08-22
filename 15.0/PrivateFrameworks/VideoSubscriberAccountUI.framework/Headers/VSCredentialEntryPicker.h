// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSCREDENTIALENTRYPICKER_H
#define VSCREDENTIALENTRYPICKER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VSCredentialEntryPicker : NSObject

@property (copy, nonatomic) NSArray *pickerItems; // ivar: _pickerItems
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)pickerItemAtCurrentIndex;


@end


#endif