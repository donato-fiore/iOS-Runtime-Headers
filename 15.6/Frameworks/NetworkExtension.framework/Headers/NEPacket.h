// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPACKET_H
#define NEPACKET_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NEFilterPacketInterpose.h"
#import "NEFlowMetaData.h"

@interface NEPacket : NSObject <NSCopying, NSSecureCoding>



@property *void context; // ivar: _context
@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly) NSInteger direction; // ivar: _direction
@property (retain) NEFilterPacketInterpose *interpose; // ivar: _interpose
@property (readonly) NEFlowMetaData *metadata; // ivar: _metadata
@property (readonly) unsigned char protocolFamily; // ivar: _protocolFamily


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 direction:(NSInteger)arg1 context:(*void)arg2 interpose:(id)arg3 ;
-(id)initWithData:(id)arg0 protocolFamily:(unsigned char)arg1 ;
-(id)initWithData:(id)arg0 protocolFamily:(unsigned char)arg1 metadata:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif