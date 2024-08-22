// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFMYRIADSESSIONMUTATION_H
#define _AFMYRIADSESSIONMUTATION_H

@class NSUUID, NSData, NSDictionary, NSString;
@protocol AFMyriadSessionMutating;

#import <Foundation/Foundation.h>

#import "AFMyriadSession.h"

@interface _AFMyriadSessionMutation : NSObject <AFMyriadSessionMutating>

 {
    AFMyriadSession *_baseModel;
    NSUInteger _generation;
    NSUUID *_sessionId;
    NSUUID *_currentElectionAdvertisementId;
    NSData *_currentElectionAdvertisementData;
    NSDictionary *_electionAdvertisementDataByIds;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setCurrentElectionAdvertisementData:(id)arg0 ;
-(void)setCurrentElectionAdvertisementId:(id)arg0 ;
-(void)setElectionAdvertisementDataByIds:(id)arg0 ;
-(void)setGeneration:(NSUInteger)arg0 ;
-(void)setSessionId:(id)arg0 ;


@end


#endif