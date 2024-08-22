// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELSORTDESCRIPTOR_H
#define MUSICKIT_SOFTLINKING_MPMODELSORTDESCRIPTOR_H

@class NSSortDescriptor;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelSortDescriptor : NSObject

@property (copy, nonatomic) NSSortDescriptor *sortDescriptor; // ivar: _sortDescriptor


+(id)recentlyAddedModelObjectSortDescriptor;
+(id)recentlyDownloadedModelObjectSortDescriptor;
-(id)initWithKey:(id)arg0 isAscending:(BOOL)arg1 ;
-(id)initWithKeyPath:(id)arg0 isAscending:(BOOL)arg1 ;


@end


#endif