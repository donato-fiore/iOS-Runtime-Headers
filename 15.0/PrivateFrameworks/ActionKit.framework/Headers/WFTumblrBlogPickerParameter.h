// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTUMBLRBLOGPICKERPARAMETER_H
#define WFTUMBLRBLOGPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;


#import "WFTumblrAccessResource.h"

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (retain, nonatomic) WFTumblrAccessResource *tumblrAccessResource; // ivar: _tumblrAccessResource


+(id)referencedActionResourceClasses;
+(void)initialize;
-(BOOL)isHidden;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)setActionResources:(id)arg0 ;
-(void)updateBlogs;
-(void)wasAddedToWorkflow;


@end


#endif