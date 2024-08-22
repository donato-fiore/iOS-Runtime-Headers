// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLNETWORKPACKET_H
#define _MLNETWORKPACKET_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface _MLNetworkPacket : NSObject

@property (retain, nonatomic) NSMutableData *buffer; // ivar: _buffer
@property (nonatomic) NSUInteger command; // ivar: _command
@property (retain, nonatomic) NSMutableData *doubleBuffer; // ivar: _doubleBuffer
@property (nonatomic) NSUInteger sizeOfPacket; // ivar: _sizeOfPacket


-(id)init;
-(void)cleanupDoubleBuffer;
-(void)reset;
-(void)resetMetadata;


@end


#endif