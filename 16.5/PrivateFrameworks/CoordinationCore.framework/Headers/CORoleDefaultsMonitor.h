// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COROLEDEFAULTSMONITOR_H
#define COROLEDEFAULTSMONITOR_H

@class NSUserDefaults;
@protocol CORoleDefaultsMonitorDelegate;

#import <Foundation/Foundation.h>


@interface CORoleDefaultsMonitor : NSObject

@property (readonly, nonatomic) NSUserDefaults *SoundBoardDefaults; // ivar: _SoundBoardDefaults
@property (readonly, weak, nonatomic) NSObject<CORoleDefaultsMonitorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger result; // ivar: _result


-(NSUInteger)_getCurrentResult;
-(id)initWithDelegate:(id)arg0 ;
-(void)_notifyDelegate:(NSUInteger)arg0 ;
-(void)_updateState;
-(void)activate;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif