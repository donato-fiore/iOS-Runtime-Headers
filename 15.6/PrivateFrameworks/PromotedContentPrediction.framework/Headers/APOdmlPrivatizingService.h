// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLPRIVATIZINGSERVICE_H
#define APODMLPRIVATIZINGSERVICE_H

@class NSString, NSXPCListener;
@protocol APOdmlPrivatizing, NSXPCListenerDelegate;


#import "APOdmlSingleton.h"

@interface APOdmlPrivatizingService : APOdmlSingleton <APOdmlPrivatizing, NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)addPrivatization:(id)arg0 recipe:(id)arg1 completion:(id)arg2 ;


@end


#endif