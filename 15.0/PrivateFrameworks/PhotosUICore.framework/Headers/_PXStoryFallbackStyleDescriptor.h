// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYFALLBACKSTYLEDESCRIPTOR_H
#define _PXSTORYFALLBACKSTYLEDESCRIPTOR_H

@class NSString;
@protocol PXStoryStyleDescriptor, PXStoryAutoEditDecisionList, PXStorySongResource;

#import <Foundation/Foundation.h>


@interface _PXStoryFallbackStyleDescriptor : NSObject <PXStoryStyleDescriptor>



@property (readonly, nonatomic) NSObject<PXStoryAutoEditDecisionList> *autoEditDecisionList;
@property (readonly, nonatomic) NSInteger customColorGradeKind;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCustomized;
@property (readonly, nonatomic) NSString *originalColorGradeCategory;
@property (readonly, nonatomic) NSObject<PXStorySongResource> *songResource;


+(id)defaultFallbackStyleDescriptor;


@end


#endif