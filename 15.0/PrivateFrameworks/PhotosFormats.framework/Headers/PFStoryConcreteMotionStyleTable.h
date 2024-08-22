// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTORYCONCRETEMOTIONSTYLETABLE_H
#define PFSTORYCONCRETEMOTIONSTYLETABLE_H

@class NSDictionary, NSArray;
@protocol PFStoryMotionStyleTable;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteMotionStyleTable : NSObject <PFStoryMotionStyleTable>

 {
    NSDictionary *_motionStylesByColorGrade;
    NSArray *_defaultFrequencies;
}




-(id)initWithMotionStylesByColorGrade:(id)arg0 defaultFrequencies:(id)arg1 ;
-(id)motionStylesForColorGrade:(id)arg0 songPace:(NSInteger)arg1 ;


@end


#endif