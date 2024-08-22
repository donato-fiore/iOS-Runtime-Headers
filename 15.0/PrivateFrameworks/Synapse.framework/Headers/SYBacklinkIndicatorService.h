// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYBACKLINKINDICATORSERVICE_H
#define SYBACKLINKINDICATORSERVICE_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, SYBacklinkIndicatorProtocol, SYBacklinkIndicatorServiceDelegate;

#import <Foundation/Foundation.h>


@interface SYBacklinkIndicatorService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SYBacklinkIndicatorServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(BOOL)_forTesting;
+(id)sharedInstance;
+(void)set_forTesting:(BOOL)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)hideIndicator;
-(void)showIndicatorForBacklinkWithDomainIdentifiers:(id)arg0 linkIdentifiers:(id)arg1 displayID:(unsigned int)arg2 corner:(NSInteger)arg3 action:(NSInteger)arg4 ;


@end


#endif