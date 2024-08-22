// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRDKGSPACKET_H
#define SCRDKGSPACKET_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SCRDKGSPacket : NSObject

@property (nonatomic) unsigned char command; // ivar: _command
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) unsigned char subCommand; // ivar: _subCommand




@end


#endif