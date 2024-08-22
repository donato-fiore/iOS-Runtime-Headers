// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEVERNOTETAGSTAGFIELDPARAMETER_H
#define WFEVERNOTETAGSTAGFIELDPARAMETER_H

@class WFDynamicTagFieldParameter, NSString;
@protocol WFDynamicTagFieldDataSource;


#import "WFEvernoteAccessResource.h"

@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter <WFDynamicTagFieldDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource; // ivar: _evernoteAccessResource
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)referencedActionResourceClasses;
-(id)suggestedTagsForTagField:(id)arg0 ;
-(void)setActionResources:(id)arg0 ;
-(void)updateTags;
-(void)wasAddedToWorkflow;


@end


#endif