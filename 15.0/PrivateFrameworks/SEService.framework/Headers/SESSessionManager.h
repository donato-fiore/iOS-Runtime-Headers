// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SESSESSIONMANAGER_H
#define SESSESSIONMANAGER_H

@class NSMutableSet;
@protocol SESSessionManagerDelegate;

#import <Foundation/Foundation.h>


@interface SESSessionManager : NSObject <SESSessionManagerDelegate>



@property (retain) NSMutableSet *sessions; // ivar: _sessions


+(id)sharedInstance;
-(id)startDigitalCarKeySessionWithOptions:(id)arg0 startCallback:(id)arg1 ;
-(void)connectionDidInvalidate;
-(void)sessionDidEnd:(id)arg0 ;


@end


#endif