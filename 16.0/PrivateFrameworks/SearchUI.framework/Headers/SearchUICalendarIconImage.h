// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICALENDARICONIMAGE_H
#define SEARCHUICALENDARICONIMAGE_H

@class NSDate;


#import "SearchUIAppIconImage.h"

@interface SearchUICalendarIconImage : SearchUIAppIconImage

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL isCurrentDate; // ivar: _isCurrentDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCurrentDateAndVariant:(NSUInteger)arg0 ;
-(id)initWithDate:(id)arg0 variant:(NSUInteger)arg1 ;
-(id)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;


@end


#endif