// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLURIWITHHASH_H
#define PLURIWITHHASH_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PLURIWithHash : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *uri; // ivar: _uri
@property (nonatomic) NSUInteger uriHash; // ivar: _uriHash


-(id)init;
-(id)initWithXPCURI:(id)arg0 ;


@end


#endif