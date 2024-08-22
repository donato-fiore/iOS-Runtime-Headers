// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTIMETITLEOPTIONS_H
#define PGTIMETITLEOPTIONS_H

@class NSLocale, NSSet;

#import <Foundation/Foundation.h>

#import "PGGraphYearNodeCollection.h"

@interface PGTimeTitleOptions : NSObject

@property (nonatomic) NSUInteger allowedFormats; // ivar: _allowedFormats
@property (retain, nonatomic) PGGraphYearNodeCollection *featuredYearNodes; // ivar: _featuredYearNodes
@property (nonatomic) BOOL filterDates; // ivar: _filterDates
@property (nonatomic) BOOL filterForSignificantDateNodes; // ivar: _filterForSignificantDateNodes
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSSet *locationNodes; // ivar: _locationNodes
@property (retain, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (nonatomic) BOOL usePeopleSubtitleFormatWithYears; // ivar: _usePeopleSubtitleFormatWithYears


-(id)init;


@end


#endif