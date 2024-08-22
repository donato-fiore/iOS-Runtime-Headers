// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAARALTERNATIVERESULTSVIEW_H
#define SAARALTERNATIVERESULTSVIEW_H

@class NSString;


#import "SAAceView.h"
#import "SAUIAddViews.h"

@interface SAARAlternativeResultsView : SAAceView

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) NSInteger rank;
@property (retain, nonatomic) SAUIAddViews *resultView;
@property (nonatomic) BOOL suggestedResult;
@property (copy, nonatomic) NSString *utterance;


+(id)alternativeResultsView;
+(id)alternativeResultsViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif