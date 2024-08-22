// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RADIOTRACKHISTORYSECTIONINFO_H
#define RADIOTRACKHISTORYSECTIONINFO_H

@class NSString, NSArray;
@protocol NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying>



@property (readonly, nonatomic) NSString *indexTitle; // ivar: _indexTitle
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger numberOfObjects; // ivar: _numberOfObjects
@property (readonly, nonatomic) NSArray *objects; // ivar: _objects


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif