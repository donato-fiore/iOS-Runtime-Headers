// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDISKCONTROLLER_H
#define PLDISKCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PLDiskController : NSObject {
    CGFloat _lastFSCheck;
    NSInteger _bytesRequiredForPhoto;
    ? _flags;
}




+(BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg0 ;
+(NSInteger)diskSpaceAvailableForPath:(id)arg0 ;
+(NSInteger)diskSpaceAvailableForUse;
+(NSInteger)fileSystemSizeForPath:(id)arg0 ;
+(NSInteger)freeDiskSpaceThreshold;
+(id)mountPointForPath:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)hasEnoughDiskToTakePicture;
-(NSInteger)bytesToAutomaticallyClear;
-(id)init;
-(void)_actuallyUpdateCookie;
-(void)_diskSpaceDidBecomeLow;
-(void)_updateCookie;
-(void)dealloc;
-(void)updateAvailableDiskSpace;


@end


#endif