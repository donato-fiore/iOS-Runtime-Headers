// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRELECTROCARDIOGRAMRESULTVIEWITEM_H
#define HRELECTROCARDIOGRAMRESULTVIEWITEM_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HRElectrocardiogramResultViewItem : NSObject

@property (readonly, copy, nonatomic) NSString *badge; // ivar: _badge
@property (readonly, nonatomic) NSArray *expandedContentItems; // ivar: _expandedContentItems
@property (readonly, copy, nonatomic) NSString *numberedTitle; // ivar: _numberedTitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *videoPath; // ivar: _videoPath
@property (readonly, copy, nonatomic) NSString *visibleBodyText; // ivar: _visibleBodyText


+(id)_makeItemForAtrialFibrillationAlgorithmVersionOne;
+(id)_makeItemForAtrialFibrillationAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(NSInteger)arg0 ;
+(id)_makeItemForHighOrLowAbove120Below50AlgorithmVersionOne;
+(id)_makeItemForHighOrLowAbove150Below50AlgorithmVersionTwoUpgradingFromAlgorithmVersion:(NSInteger)arg0 ;
+(id)_makeItemForInconclusiveAlgorithmVersionOneWithLearnMoreDelegate:(id)arg0 ;
+(id)_makeItemForInconclusiveAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(NSInteger)arg0 withLearnMoreDelegate:(id)arg1 ;
+(id)_makeItemForPoorRecordingAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(NSInteger)arg0 withLearnMoreDelegate:(id)arg1 ;
+(id)_makeItemForSinusRhythmAlgorithmVersionOne;
+(id)viewItemWithClassification:(NSUInteger)arg0 sampleAlgorithmVersion:(id)arg1 forAlgorithmVersion:(NSInteger)arg2 learnMoreDelegate:(id)arg3 ;
+(id)viewItemWithClassification:(NSUInteger)arg0 sampleAlgorithmVersion:(id)arg1 forAlgorithmVersion:(NSInteger)arg2 upgradingFromAlgorithmVersion:(NSInteger)arg3 learnMoreDelegate:(id)arg4 ;
-(id)initWithBadge:(id)arg0 title:(id)arg1 numberedTitle:(id)arg2 visibleBodyText:(id)arg3 videoPath:(id)arg4 expandedContentItems:(id)arg5 ;


@end


#endif