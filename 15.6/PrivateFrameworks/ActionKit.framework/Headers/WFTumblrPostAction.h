// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTUMBLRPOSTACTION_H
#define WFTUMBLRPOSTACTION_H

@class WFAction, NSString;
@protocol WFDynamicEnumerationDataSource;


#import "TMAPIClient.h"

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource>



@property (readonly, nonatomic) TMAPIClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)inputsMultipleItems;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)generatedResourceNodes;
-(id)inputContentClasses;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)initializeParameters;
-(void)openFiles:(id)arg0 ;
-(void)openPostWithType:(id)arg0 withParameters:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateTagsParameterHidden;


@end


#endif