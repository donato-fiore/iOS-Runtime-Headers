// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNACDPEOPLESUGGESTERFACADE_H
#define _CNACDPEOPLESUGGESTERFACADE_H

@class NSString;
@protocol CNACDPeopleSuggesterFacade;

#import <Foundation/Foundation.h>


@interface _CNACDPeopleSuggesterFacade : NSObject <CNACDPeopleSuggesterFacade>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)suggestPeopleWithContext:(id)arg0 settings:(id)arg1 error:(*id)arg2 ;


@end


#endif