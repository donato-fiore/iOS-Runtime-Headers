// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLDAAPBUFFER_H
#define BLDAAPBUFFER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface BLDAAPBuffer : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data


-(NSInteger)appendHeader:(unsigned int)arg0 size:(unsigned int)arg1 ;
-(NSInteger)appendUInt32:(unsigned int)arg0 withCode:(unsigned int)arg1 ;
-(NSInteger)appendUInt64:(NSUInteger)arg0 withCode:(unsigned int)arg1 ;
-(NSInteger)appendUInt8:(unsigned char)arg0 withCode:(unsigned int)arg1 ;
-(id)init;


@end


#endif