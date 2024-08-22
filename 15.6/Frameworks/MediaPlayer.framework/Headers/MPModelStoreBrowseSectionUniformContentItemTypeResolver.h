// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELSTOREBROWSESECTIONUNIFORMCONTENTITEMTYPERESOLVER_H
#define MPMODELSTOREBROWSESECTIONUNIFORMCONTENTITEMTYPERESOLVER_H


#import <Foundation/Foundation.h>


@interface MPModelStoreBrowseSectionUniformContentItemTypeResolver : NSObject {
    BOOL _hasValidUniformContentItemType;
    map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::less<MPModelStoreBrowseDetailedContentItemType>, std::allocator<std::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long>>> _contentItemTypeOccurrences;
    NSUInteger _totalNumberOfOccurrences;
    NSInteger _uniformContentItemType;
}




-(NSInteger)uniformContentItemType;
-(void)addContentItemType:(NSInteger)arg0 ;


@end


#endif