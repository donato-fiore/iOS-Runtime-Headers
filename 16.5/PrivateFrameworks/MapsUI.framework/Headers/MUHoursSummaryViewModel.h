// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUHOURSSUMMARYVIEWMODEL_H
#define MUHOURSSUMMARYVIEWMODEL_H

@class NSArray, NSString, UIColor;

#import <Foundation/Foundation.h>


@interface MUHoursSummaryViewModel : NSObject

@property (retain, nonatomic) NSArray *AMPMSymbols; // ivar: _AMPMSymbols
@property (nonatomic) BOOL hideChevron; // ivar: _hideChevron
@property (retain, nonatomic) NSString *hoursText; // ivar: _hoursText
@property (retain, nonatomic) UIColor *openStateColor; // ivar: _openStateColor
@property (retain, nonatomic) NSString *openStateText; // ivar: _openStateText
@property (nonatomic, getter=isServiceHours) BOOL serviceHours; // ivar: _serviceHours
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText


-(id)buildDefaultPlacecardHoursString;
-(id)init;


@end


#endif