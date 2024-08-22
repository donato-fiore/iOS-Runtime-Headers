// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCHAPTERTITLE_H
#define PGCHAPTERTITLE_H

@class NSDateInterval, NSString;

#import <Foundation/Foundation.h>


@interface PGChapterTitle : NSObject

@property (readonly, nonatomic) NSDateInterval *chapterDateInterval; // ivar: _chapterDateInterval
@property (readonly, nonatomic) NSString *localizedTitleString; // ivar: _localizedTitleString


-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithLocalizedTitleString:(id)arg0 chapterDateInterval:(id)arg1 ;


@end


#endif