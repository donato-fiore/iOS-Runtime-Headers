// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNACDPEOPLESUGGESTERFACADETESTDOUBLE_H
#define _CNACDPEOPLESUGGESTERFACADETESTDOUBLE_H

@class NSMutableArray, NSString;
@protocol CNACDPeopleSuggesterFacade, _CNACDPeopleSuggesterFacadeTestDoubleDelegate;

#import <Foundation/Foundation.h>


@interface _CNACDPeopleSuggesterFacadeTestDouble : NSObject <CNACDPeopleSuggesterFacade>

 {
    NSMutableArray *_suggestions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<_CNACDPeopleSuggesterFacadeTestDoubleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)typeOfHandle:(id)arg0 ;
-(id)addPersonWithDisplayName:(id)arg0 handle:(id)arg1 contactIdentifier:(id)arg2 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)suggestPeopleWithContext:(id)arg0 settings:(id)arg1 error:(*id)arg2 ;


@end


#endif