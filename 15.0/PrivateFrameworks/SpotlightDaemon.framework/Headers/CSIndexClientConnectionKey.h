// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSINDEXCLIENTCONNECTIONKEY_H
#define CSINDEXCLIENTCONNECTIONKEY_H

@protocol NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSIndexClientConnectionKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection


+(id)keyWithConnection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConnection:(id)arg0 ;


@end


#endif