// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSUGGESTEDSAVEREQUEST_H
#define CNSUGGESTEDSAVEREQUEST_H

@class NSSet, NSMutableSet;


#import "CNSaveRequest.h"

@interface CNSuggestedSaveRequest : CNSaveRequest

@property (readonly, copy, nonatomic) NSSet *confirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *mutableConfirmedSuggestions; // ivar: _mutableConfirmedSuggestions
@property (retain, nonatomic) NSMutableSet *mutableRejectedSuggestions; // ivar: _mutableRejectedSuggestions
@property (readonly, copy, nonatomic) NSSet *rejectedSuggestions;


-(id)storeIdentifier;
-(void)confirmSuggestion:(id)arg0 ;
-(void)rejectSuggestion:(id)arg0 ;


@end


#endif