// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTIONRECEIVERPENDINGREFRESHTRACKER_H
#define ATXSUGGESTIONRECEIVERPENDINGREFRESHTRACKER_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject

@property (retain, nonatomic) NSMutableSet *clientModelsThatUpdatedSuggestions; // ivar: _clientModelsThatUpdatedSuggestions
@property (retain, nonatomic) NSMutableDictionary *registeredDelegatesForClientModels; // ivar: _registeredDelegatesForClientModels
@property (retain, nonatomic) NSMutableDictionary *requestUUIDToClientModelCaches; // ivar: _requestUUIDToClientModelCaches
@property (nonatomic) BOOL shouldForceRefreshForAllUIs; // ivar: _shouldForceRefreshForAllUIs


-(id)init;


@end


#endif