// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSOUTPUTEVENTCATEGORY_H
#define VOSOUTPUTEVENTCATEGORY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VOSOutputEventCategory : NSObject

@property (retain, nonatomic) NSString *localizedCategoryName; // ivar: _localizedCategoryName
@property (retain, nonatomic) NSArray *outputEvents; // ivar: _outputEvents


+(id)allCategories;
+(id)appFeedback;
+(id)braille;
+(id)interaction;
+(id)system;
+(id)textEditing;
+(id)voiceOverFeedback;
-(BOOL)containsOutputEvent:(id)arg0 ;
-(id)init;
-(id)initWithOutputEvents:(id)arg0 localizedCategoryName:(id)arg1 ;


@end


#endif