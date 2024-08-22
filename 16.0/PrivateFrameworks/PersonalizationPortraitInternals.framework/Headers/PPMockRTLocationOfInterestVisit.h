// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPMOCKRTLOCATIONOFINTERESTVISIT_H
#define PPMOCKRTLOCATIONOFINTERESTVISIT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PPMockRTLocationOfInterestVisit : NSObject

@property (retain, nonatomic) NSDate *entryDate; // ivar: _entryDate
@property (retain, nonatomic) NSDate *exitDate; // ivar: _exitDate


+(id)mockLocationOfInterestVisitWithEntryDate:(id)arg0 exitDate:(id)arg1 ;


@end


#endif