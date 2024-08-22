// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSGREENTEASTREAMINGDEFAULTS_H
#define NMSGREENTEASTREAMINGDEFAULTS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface NMSGreenTeaStreamingDefaults : NSObject {
    NSUserDefaults *_sharedDefaults;
}




+(id)sharedInstance;
-(BOOL)_boolForKey:(id)arg0 ;
-(BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
-(BOOL)greenTeaMusicAllowCellularForStreaming;
-(BOOL)greenTeaMusicIsMirroringStreamingSettings;
-(id)init;
-(void)_setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)arg0 ;
-(void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)arg0 ;
-(void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)arg0 ;


@end


#endif