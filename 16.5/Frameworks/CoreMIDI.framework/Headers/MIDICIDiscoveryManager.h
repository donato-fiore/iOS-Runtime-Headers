// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIDICIDISCOVERYMANAGER_H
#define MIDICIDISCOVERYMANAGER_H


#import <Foundation/Foundation.h>


@interface MIDICIDiscoveryManager : NSObject {
    unsigned int _mClient;
}


@property (copy, nonatomic) id *responseBlock; // ivar: _mResponseBlock


+(id)sharedInstance;
-(id)handleNotification:(struct MIDINotification *)arg0 ;
-(int)createClient;
-(int)setupManager;
-(void)dealloc;
-(void)debugPrintMessage;
-(void)discover;
-(void)discoverWithHandler:(id)arg0 ;


@end


#endif