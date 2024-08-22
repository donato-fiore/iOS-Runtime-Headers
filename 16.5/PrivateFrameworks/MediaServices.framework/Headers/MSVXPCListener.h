// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVXPCLISTENER_H
#define MSVXPCLISTENER_H

@class NSXPCListener, NSString;



@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}




-(id)initWithMachServiceName:(id)arg0 ;
-(id)localProxy;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setDelegate:(id)arg0 ;
-(void)suspend;


@end


#endif