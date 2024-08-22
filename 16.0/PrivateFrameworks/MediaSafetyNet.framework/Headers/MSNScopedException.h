// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSNSCOPEDEXCEPTION_H
#define MSNSCOPEDEXCEPTION_H

@class NSXPCConnection, NSString;

#import <Foundation/Foundation.h>


@interface MSNScopedException : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (copy) NSString *exception; // ivar: _exception


-(id)initWithConnection:(id)arg0 exception:(id)arg1 ;


@end


#endif