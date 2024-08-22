// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTNETWORKOBJECT_H
#define ASTNETWORKOBJECT_H

@class NSMutableData;
@protocol ASTConnection;

#import <Foundation/Foundation.h>


@interface ASTNetworkObject : NSObject

@property (retain, nonatomic) NSObject<ASTConnection> *connection; // ivar: _connection
@property (retain, nonatomic) NSMutableData *receivedData; // ivar: _receivedData




@end


#endif