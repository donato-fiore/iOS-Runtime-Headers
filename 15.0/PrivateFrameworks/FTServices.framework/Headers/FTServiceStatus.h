// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSERVICESTATUS_H
#define FTSERVICESTATUS_H


#import <Foundation/Foundation.h>


@interface FTServiceStatus : NSObject

@property (nonatomic) BOOL blockPost; // ivar: _blockPost
@property (readonly, nonatomic) BOOL faceTimeAudioSupported;
@property (readonly, nonatomic) BOOL faceTimeMultiwaySupported;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property NSUInteger supportedServicesFlags; // ivar: _supportedServicesFlags
@property (nonatomic) int supportedServicesToken; // ivar: _supportedServicesToken


+(id)sharedInstance;
-(id)initPrivate;
-(void)_addObservers;
-(void)_reload;
-(void)_removeObservers;
-(void)dealloc;


@end


#endif