// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSWEBKITPROCESSSUPPORTHANDLER_H
#define FSWEBKITPROCESSSUPPORTHANDLER_H

@class NSXPCConnection;
@protocol FontServicesWebKitSupportHostProtocol;

#import <Foundation/Foundation.h>


@interface FSWebKitProcessSupportHandler : NSObject <FontServicesWebKitSupportHostProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)initWithConnection:(id)arg0 ;
-(void)checkin:(id)arg0 reply:(id)arg1 ;
-(void)ping:(id)arg0 ;


@end


#endif