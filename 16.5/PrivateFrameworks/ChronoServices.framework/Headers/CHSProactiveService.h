// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSPROACTIVESERVICE_H
#define CHSPROACTIVESERVICE_H


#import <Foundation/Foundation.h>

#import "CHSChronoServicesConnection.h"

@interface CHSProactiveService : NSObject {
    CHSChronoServicesConnection *_connection;
}




-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)loadSuggestedWidget:(id)arg0 metrics:(id)arg1 stackIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)loadSuggestedWidget:(id)arg0 withMetrics:(id)arg1 completion:(id)arg2 ;
-(void)suggestionBudgetsForStackIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif