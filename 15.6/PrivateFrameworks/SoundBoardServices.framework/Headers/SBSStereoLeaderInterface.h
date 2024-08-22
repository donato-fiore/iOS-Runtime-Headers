// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSSTEREOLEADERINTERFACE_H
#define SBSSTEREOLEADERINTERFACE_H

@class NSXPCConnection;
@protocol SBSImplementer;

#import <Foundation/Foundation.h>


@interface SBSStereoLeaderInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)dealloc;
-(void)isFollower:(id)arg0 ;
-(void)setDeviceAsStereoLeader:(BOOL)arg0 withOptions:(id)arg1 ;


@end


#endif