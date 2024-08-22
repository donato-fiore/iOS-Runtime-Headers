// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSPROACTIVESERVICE_H
#define CHSPROACTIVESERVICE_H

@protocol CHSChronoWidgetServiceServer;

#import <Foundation/Foundation.h>


@interface CHSProactiveService : NSObject

@property (readonly, nonatomic) NSObject<CHSChronoWidgetServiceServer> *server; // ivar: _server


-(id)init;
-(id)initWithServer:(id)arg0 ;
-(void)loadSuggestedWidget:(id)arg0 metrics:(id)arg1 stackIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)loadSuggestedWidget:(id)arg0 withMetrics:(id)arg1 completion:(id)arg2 ;
-(void)suggestionBudgetsForStackIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif