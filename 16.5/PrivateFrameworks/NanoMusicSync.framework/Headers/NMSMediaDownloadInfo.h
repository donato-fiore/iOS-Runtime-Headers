// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMEDIADOWNLOADINFO_H
#define NMSMEDIADOWNLOADINFO_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface NMSMediaDownloadInfo : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *items; // ivar: _items
@property (nonatomic) NSUInteger totalItemSize; // ivar: _totalItemSize


-(BOOL)containsItem:(id)arg0 ;
-(NSUInteger)totalItemCount;
-(id)description;
-(id)externalLibraryItemIdentifiers;
-(id)initWithItems:(id)arg0 ;
-(id)mediaLibraryItemIdentifiers;
-(void)enumerateMediaItemsUsingBlock:(id)arg0 ;


@end


#endif