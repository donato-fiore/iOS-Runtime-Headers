// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNAPEOPLESUGGESTERFACADETESTDOUBLE_H
#define _CNAPEOPLESUGGESTERFACADETESTDOUBLE_H

@class NSMutableArray, NSString;
@protocol CNAPeopleSuggesterFacade, _CNAPeopleSuggesterFacadeTestDoubleDelegate;

#import <Foundation/Foundation.h>


@interface _CNAPeopleSuggesterFacadeTestDouble : NSObject <CNAPeopleSuggesterFacade>

 {
    NSMutableArray *_suggestions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<_CNAPeopleSuggesterFacadeTestDoubleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)makeContactWithDisplayName:(id)arg0 ;
+(id)makeContactWithDisplayName:(id)arg0 handle:(id)arg1 ;
+(id)makeRecipientWithDisplayName:(id)arg0 handle:(id)arg1 ;
+(id)makeRecipientWithDisplayName:(id)arg0 handle:(id)arg1 hasContact:(BOOL)arg2 ;
+(id)personWithDisplayName:(id)arg0 handle:(id)arg1 hasContact:(BOOL)arg2 ;
-(id)addGroupWithDisplayName:(id)arg0 conversationIdentifier:(id)arg1 recipients:(id)arg2 ;
-(id)addPerson:(id)arg0 ;
-(id)autocompleteSearchResultsWithPredictionContext:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)addSuggestion:(id)arg0 ;


@end


#endif