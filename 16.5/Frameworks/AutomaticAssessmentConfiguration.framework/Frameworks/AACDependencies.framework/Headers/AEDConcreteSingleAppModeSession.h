// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEDCONCRETESINGLEAPPMODESESSION_H
#define AEDCONCRETESINGLEAPPMODESESSION_H

@class UIAutonomousSingleAppModeSession;
@protocol AEDSingleAppModeSession;

#import <Foundation/Foundation.h>


@interface AEDConcreteSingleAppModeSession : NSObject <AEDSingleAppModeSession>

 {
    UIAutonomousSingleAppModeSession *_session;
}




-(void)deactivateWithCompletion:(id)arg0 ;


@end


#endif