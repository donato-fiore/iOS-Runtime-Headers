// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSCLIENT_H
#define CMSCLIENT_H

@class NSXPCConnection;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CMSClient : NSObject <NSCopying>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)clientWithConnection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif