// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSERVICEAGENT_H
#define IMSERVICEAGENT_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface IMServiceAgent : NSObject {
    NSDictionary *_currentAVChatInfo;
}


@property (readonly, weak, nonatomic) NSDictionary *currentAVChatInfo;
@property (retain, nonatomic) NSArray *myAvailableMessages;
@property (retain, nonatomic) NSArray *myAwayMessages;
@property (readonly, nonatomic) NSUInteger requestAudioReflectorStart;
@property (readonly, nonatomic) NSUInteger requestAudioReflectorStop;
@property (readonly, nonatomic) NSUInteger vcCapabilities;


+(NSInteger)serviceAgentCapabilities;
+(id)imageNameForStatus:(NSUInteger)arg0 ;
+(id)imageURLForStatus:(NSUInteger)arg0 ;
+(id)notificationCenter;
+(id)sharedAgent;
+(void)forgetStatusImageAppearance;
+(void)setServiceAgentCapabilities:(NSInteger)arg0 ;
-(NSUInteger)requestVideoStillForPerson:(id)arg0 ;
-(id)myPictureData;
-(id)notificationCenter;
-(id)serviceWithName:(id)arg0 ;
-(id)serviceWithNameNonBlocking:(id)arg0 ;
-(void)launchIfNecessary;
-(void)setMyStatus:(NSUInteger)arg0 message:(id)arg1 ;


@end


#endif