// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIACTIVATIONSOURCE_H
#define SIRIACTIVATIONSOURCE_H

@class BSServiceConnection, NSString;

#import <Foundation/Foundation.h>


@interface SiriActivationSource : NSObject {
    BSServiceConnection *_connection;
    os_unfair_lock_s _lock;
    BOOL _active;
    BOOL _knowsIfActive;
}


@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isActive;
-(BOOL)isEnabled;
-(id)init;
-(void)activeChangedTo:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif