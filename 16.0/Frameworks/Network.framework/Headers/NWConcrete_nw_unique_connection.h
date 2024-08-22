// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_UNIQUE_CONNECTION_H
#define NWCONCRETE_NW_UNIQUE_CONNECTION_H

@class NSString;
@protocol OS_nw_unique_connection, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_connection.h"

@interface NWConcrete_nw_unique_connection : NSObject <OS_nw_unique_connection>

 {
    NSObject<OS_nw_endpoint> *endpoint;
    char service;
    NSUInteger receivedSequenceNumber;
    NSUInteger uniqueID;
    unsigned char uuid;
    NWConcrete_nw_connection *connection;
    int dupedSocketFD;
    BOOL isIncoming;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif