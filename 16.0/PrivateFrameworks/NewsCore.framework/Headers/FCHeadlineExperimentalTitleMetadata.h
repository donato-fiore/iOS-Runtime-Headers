// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHEADLINEEXPERIMENTALTITLEMETADATA_H
#define FCHEADLINEEXPERIMENTALTITLEMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCHeadlineExperimentalTitleMetadata : NSObject

@property (readonly, nonatomic) NSInteger arrayIndexUsedforTitle; // ivar: _arrayIndexUsedforTitle
@property (readonly, copy, nonatomic) NSString *chosenTitle; // ivar: _chosenTitle
@property (readonly, nonatomic) BOOL isTitleExperimental; // ivar: _isTitleExperimental
@property (readonly, nonatomic) int treatmentState; // ivar: _treatmentState


-(id)initWithChosenTitle:(id)arg0 isTitleExperimental:(BOOL)arg1 arrayIndexUsedforTitle:(NSInteger)arg2 treatmentState:(int)arg3 ;


@end


#endif