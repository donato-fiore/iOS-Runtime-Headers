// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTDEFAULTSCHANGENOTIFIER_H
#define MTDEFAULTSCHANGENOTIFIER_H

@class NSUserDefaults;


#import "MTDictionaryDiff.h"

@interface MTDefaultsChangeNotifier : MTDictionaryDiff

@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running


-(id)initWithProperties:(id)arg0 defaults:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;
-(void)stop;


@end


#endif