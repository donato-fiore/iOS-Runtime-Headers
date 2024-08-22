// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPFEATURESENTENCEFRAGMENT_H
#define IPFEATURESENTENCEFRAGMENT_H


#import <Foundation/Foundation.h>


@interface IPFeatureSentenceFragment : NSObject

@property NSUInteger clusterType; // ivar: _clusterType
@property (readonly, nonatomic) NSUInteger mainPolarity;
@property CGFloat probability_Confirmation; // ivar: _probability_Confirmation
@property CGFloat probability_None; // ivar: _probability_None
@property CGFloat probability_Proposal; // ivar: _probability_Proposal
@property CGFloat probability_Rejection; // ivar: _probability_Rejection
@property _NSRange range; // ivar: _range


+(id)fragmentWithRange:(struct _NSRange )arg0 clusterType:(NSUInteger)arg1 ;
-(id)description;


@end


#endif