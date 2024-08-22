// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNKEEPALIVEMANAGER_H
#define MNKEEPALIVEMANAGER_H

@class geo_isolater, NSFileManager, NSString;

#import <Foundation/Foundation.h>


@interface MNKeepAliveManager : NSObject {
    geo_isolater *_isolator;
}


@property NSUInteger counter; // ivar: _counter
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (retain, nonatomic) NSString *launchdKeepAliveFile; // ivar: _launchdKeepAliveFile


+(id)sharedInstance;
-(id)init;
-(void)checkIn;
-(void)checkOut;


@end


#endif