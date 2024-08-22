// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ML3DATABASECONNECTIONWRAPPER_H
#define _ML3DATABASECONNECTIONWRAPPER_H

@class NSThread;

#import <Foundation/Foundation.h>

#import "ML3DatabaseConnection.h"

@interface _ML3DatabaseConnectionWrapper : NSObject

@property (retain, nonatomic) NSThread *borrowingThread; // ivar: _borrowingThread
@property (retain, nonatomic) ML3DatabaseConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSThread *owningThread; // ivar: _owningThread
@property (nonatomic) NSUInteger useCount; // ivar: _useCount


-(id)description;
-(id)initWithConnection:(id)arg0 ;


@end


#endif