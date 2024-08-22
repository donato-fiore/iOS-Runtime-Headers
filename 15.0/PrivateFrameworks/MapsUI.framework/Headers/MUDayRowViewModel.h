// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUDAYROWVIEWMODEL_H
#define MUDAYROWVIEWMODEL_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MUDayRowViewModel : NSObject

@property (retain, nonatomic) NSArray *AMPMStrings; // ivar: _AMPMStrings
@property (retain, nonatomic) NSString *dayString; // ivar: _dayString
@property (retain, nonatomic) NSArray *hourStrings; // ivar: _hourStrings
@property (retain, nonatomic) NSString *labelHeaderString; // ivar: _labelHeaderString


-(id)buildDefaultPlacecardHoursString;


@end


#endif