// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTESTCHANGESESSIONMANAGER_H
#define TSWPTESTCHANGESESSIONMANAGER_H

@protocol TSWPChangeSessionManager;

#import <Foundation/Foundation.h>

#import "TSWPChangeSession.h"

@interface TSWPTestChangeSessionManager : NSObject <TSWPChangeSessionManager>

 {
    TSWPChangeSession *_currentSession;
}


@property (readonly, nonatomic) BOOL isTrackingChanges;


-(id)changeSessionAuthorCreatedWithCommand:(*id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)dealloc;
-(void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(*id)arg0 ;


@end


#endif