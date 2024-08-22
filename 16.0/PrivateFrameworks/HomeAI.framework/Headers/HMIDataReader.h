// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIDATAREADER_H
#define HMIDATAREADER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HMIDataReader : NSObject {
    NSData *_data;
    NSUInteger _position;
}




-(NSUInteger)length;
-(NSUInteger)position;
-(NSUInteger)readUInt64;
-(id)initWithData:(id)arg0 ;
-(id)readData:(NSUInteger)arg0 ;
-(unsigned int)readUInt32;
-(void)seek:(NSUInteger)arg0 ;


@end


#endif