// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBFLOWACTION_H
#define AMSUIWEBFLOWACTION_H

@class NSString, NSDictionary;
@protocol AMSUIWebActionRunnable, AMSUIWebPageProvider;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebLoadingPageModel.h"
#import "AMSUIWebNavigationBarModel.h"

@interface AMSUIWebFlowAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) id *actionData; // ivar: _actionData
@property (nonatomic) NSInteger animationType; // ivar: _animationType
@property (retain, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferredPresentation; // ivar: _deferredPresentation
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage; // ivar: _loadingPage
@property (retain, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (nonatomic) CGSize modalWindowSize; // ivar: _modalWindowSize
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // ivar: _navigationBar
@property (nonatomic) NSInteger popToRelativeIndex; // ivar: _popToRelativeIndex
@property (nonatomic) NSInteger presentationType; // ivar: _presentationType
@property (retain, nonatomic) NSObject<AMSUIWebPageProvider> *replacementPage; // ivar: _replacementPage
@property (nonatomic) NSInteger replacementType; // ivar: _replacementType
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(void)_runWithType:(NSInteger)arg0 options:(id)arg1 ;


@end


#endif