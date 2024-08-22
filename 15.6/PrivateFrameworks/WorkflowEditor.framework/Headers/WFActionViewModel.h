// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONVIEWMODEL_H
#define WFACTIONVIEWMODEL_H

@protocol WFActionEventObserver, WFParameterEventObserver;

#import <Foundation/Foundation.h>


@interface WFActionViewModel : NSObject <WFActionEventObserver, WFParameterEventObserver>

 {
    ? action;
    ? visibleParameters;
    ? parameterSummary;
    ? additionalParameterSummaries;
    ? showMoreParameters;
    ? _isFavorite;
    ? _resourceError;
    ? _accessResourcesThatCanLogOut;
    ? _accessResourcesAllowingMultipleAccounts;
    ? onParameterStateChange;
}




-(id)init;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)actionNameDidChange:(id)arg0 ;
-(void)actionOutputDetailsDidChange:(id)arg0 ;
-(void)actionReloadAuxiliaryButton:(id)arg0 ;
-(void)dealloc;
-(void)favoritesDidChange;
-(void)parameterAttributesDidChange:(id)arg0 ;
-(void)pasteboardDidChange;
-(void)resourcesDidChange:(id)arg0 ;


@end


#endif