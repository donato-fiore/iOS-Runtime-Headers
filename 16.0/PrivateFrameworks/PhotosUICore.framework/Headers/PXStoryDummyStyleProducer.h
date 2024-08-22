// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDUMMYSTYLEPRODUCER_H
#define PXSTORYDUMMYSTYLEPRODUCER_H

@protocol PXStoryStyleProducer;

#import <Foundation/Foundation.h>


@interface PXStoryDummyStyleProducer : NSObject <PXStoryStyleProducer>



@property (readonly, nonatomic) id *styleConfiguration; // ivar: _styleConfiguration


-(id)init;
-(id)initWithStyleConfiguration:(id)arg0 ;
-(id)styleWithCustomColorGradeKind:(NSInteger)arg0 originalColorGradeCategory:(id)arg1 songResource:(id)arg2 cueSource:(id)arg3 autoEditDecisionList:(id)arg4 styleOptions:(struct ? )arg5 isCustomized:(BOOL)arg6 ;


@end


#endif