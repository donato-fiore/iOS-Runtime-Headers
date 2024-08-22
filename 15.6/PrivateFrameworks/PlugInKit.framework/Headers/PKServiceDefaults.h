// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSERVICEDEFAULTS_H
#define PKSERVICEDEFAULTS_H

@class NSUserDefaults;


#import "PKServicePersonality.h"

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality; // ivar: _personality


-(BOOL)synchronize;
-(id)initWithPersonality:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif