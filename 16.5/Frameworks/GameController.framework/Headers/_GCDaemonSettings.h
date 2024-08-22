// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDAEMONSETTINGS_H
#define _GCDAEMONSETTINGS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface _GCDaemonSettings : NSObject {
    NSUserDefaults *_defaults;
}




+(id)instance;
-(id)anonymizedIdentifierForControllerIdentifier:(id)arg0 ;
-(id)init;
-(id)newAnonymizedIdentifiersDictionary:(id)arg0 ;


@end


#endif