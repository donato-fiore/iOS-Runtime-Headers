// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXGLOBALSMARTSUPPRESSION_H
#define ATXGLOBALSMARTSUPPRESSION_H

@class _PASCFBurstTrie;

#import <Foundation/Foundation.h>


@interface ATXGlobalSmartSuppression : NSObject {
    _PASCFBurstTrie *_associationScoresTrie;
}




+(int)decodeAssociationScoreForContext:(NSUInteger)arg0 forEncodedScore:(int)arg1 ;
+(int)decodeGeoAssociationScoreAtGeoHashResolution:(NSUInteger)arg0 forEncodedScore:(int)arg1 ;
-(id)fetchContextualAssociationScoresForBundleId:(id)arg0 ;
-(id)init;


@end


#endif