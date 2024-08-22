// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKHOSTDEFAULTS_H
#define PKHOSTDEFAULTS_H

@class NSUserDefaults;


#import "PKHostPlugIn.h"

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin; // ivar: _plugin


-(BOOL)synchronize;
-(id)initWithPlugIn:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)registerDefaults:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif