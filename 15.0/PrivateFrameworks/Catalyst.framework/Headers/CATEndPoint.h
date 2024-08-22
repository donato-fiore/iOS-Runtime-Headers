// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATENDPOINT_H
#define CATENDPOINT_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CATAddress.h"

@interface CATEndPoint : NSObject

@property (readonly, nonatomic) CATAddress *address; // ivar: _address
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) unsigned int port; // ivar: _port


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndPoint:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithAddress:(id)arg0 port:(unsigned int)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif