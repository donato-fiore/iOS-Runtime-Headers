// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUIPEOPLESUGGESTIONIMAGEREQUEST_H
#define SFUIPEOPLESUGGESTIONIMAGEREQUEST_H

@protocol SFPeopleSuggestion;


#import "SFUIImageRequest.h"

@interface SFUIPeopleSuggestionImageRequest : SFUIImageRequest

@property (readonly, copy, nonatomic) NSObject<SFPeopleSuggestion> *peopleSuggestion; // ivar: _peopleSuggestion
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithRequestID:(int)arg0 peopleSuggestion:(id)arg1 type:(NSInteger)arg2 resultHandler:(id)arg3 ;


@end


#endif