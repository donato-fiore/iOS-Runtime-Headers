// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMUTABLEBOOKMARK_H
#define VUIMUTABLEBOOKMARK_H



#import "VUIBookmark.h"

@interface VUIMutableBookmark : VUIBookmark



+(BOOL)supportsSecureCoding;
-(void)setBookmarkTime:(CGFloat)arg0 ;
-(void)setBookmarkTimestamp:(id)arg0 ;
-(void)setHasBeenPlayed:(BOOL)arg0 ;
-(void)setHasBeenRented:(BOOL)arg0 ;
-(void)setIsMarkedAsUnwatched:(BOOL)arg0 ;
-(void)setPlayCount:(NSUInteger)arg0 ;


@end


#endif