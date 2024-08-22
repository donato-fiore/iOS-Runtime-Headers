// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONDEFAULTVALUEPROVIDER_H
#define LNACTIONDEFAULTVALUEPROVIDER_H

@class LNFullyQualifiedActionIdentifier, LNActionMetadata;

#import <Foundation/Foundation.h>


@interface LNActionDefaultValueProvider : NSObject

@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) LNActionMetadata *actionMetadata; // ivar: _actionMetadata


-(id)initWithActionIdentifier:(id)arg0 actionMetadata:(id)arg1 ;
-(id)loadActionMetadataWithError:(*id)arg0 ;
-(id)loadStaticDefaultValueForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)loadDefaultValuesWithCompletionHandler:(id)arg0 ;
-(void)loadSuggestedFocusActionsWithSuggestionContext:(id)arg0 completion:(id)arg1 ;


@end


#endif