// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSDAAPENCODER_H
#define TVRMSDAAPENCODER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TVRMSDAAPEncoder : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data


-(id)init;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forCode:(unsigned int)arg2 ;
-(void)encodeData:(id)arg0 forCode:(unsigned int)arg1 ;
-(void)encodeInt32:(int)arg0 forCode:(unsigned int)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forCode:(unsigned int)arg1 ;
-(void)encodeString:(id)arg0 forCode:(unsigned int)arg1 ;


@end


#endif