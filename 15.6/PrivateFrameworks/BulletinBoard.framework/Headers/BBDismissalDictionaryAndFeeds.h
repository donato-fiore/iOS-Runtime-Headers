// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBDISMISSALDICTIONARYANDFEEDS_H
#define BBDISMISSALDICTIONARYANDFEEDS_H

@class NSString;


#import "BBDismissalItem.h"

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem

@property (readonly, copy, nonatomic) NSString *dismissalHash; // ivar: _dismissalHash
@property (readonly, nonatomic) CGFloat dismissalTimeInterval; // ivar: _dismissalTimeInterval


-(BOOL)matchDismissalDictionary:(id)arg0 ;
-(id)description;
-(id)initWithDismissalDictionary:(id)arg0 andFeeds:(NSUInteger)arg1 ;


@end


#endif