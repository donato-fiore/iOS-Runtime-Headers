// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTNEWSTODAYRESULTSSOURCEFETCHHELPER_H
#define NTNEWSTODAYRESULTSSOURCEFETCHHELPER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NTNewsTodayResultsSourceFetchHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors; // ivar: _remainingSectionsBySectionQueueDescriptors
@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors; // ivar: _sectionQueueDescriptors


-(id)init;
-(id)initWithSectionQueueDescriptors:(id)arg0 ;
-(id)sectionDescriptorsAtHeadsOfQueues;
-(void)removeSectionDescriptors:(id)arg0 ;


@end


#endif