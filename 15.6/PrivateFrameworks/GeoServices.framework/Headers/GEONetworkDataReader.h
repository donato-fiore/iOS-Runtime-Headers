// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONETWORKDATAREADER_H
#define GEONETWORKDATAREADER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface GEONetworkDataReader : NSObject {
    NSMutableData *_data;
    NSUInteger _dataLength;
    *void _bytes;
    NSUInteger _bookmarkOffset;
    NSUInteger _offset;
}




-(BOOL)hasUnreadData;
-(BOOL)readUnsignedInt:(*unsigned int)arg0 ;
-(BOOL)readUnsignedShort:(*unsigned short)arg0 ;
-(id)allData;
-(id)initWithData:(id)arg0 ;
-(id)readData:(unsigned int)arg0 ;
-(id)readString;
-(void)appendNetworkData:(id)arg0 ;
-(void)dealloc;
-(void)markOffset;
-(void)seekToMarkedOffset;


@end


#endif