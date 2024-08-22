// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSSHKEYENCODER_H
#define WFSSHKEYENCODER_H

@class NSMutableData, NSData;

#import <Foundation/Foundation.h>


@interface WFSSHKeyEncoder : NSObject

@property (readonly, nonatomic) NSMutableData *data; // ivar: _data
@property (readonly, nonatomic) NSData *encodedData;
@property (readonly, nonatomic) NSUInteger encodedLength;


-(id)init;
-(void)encodeChar:(char)arg0 ;
-(void)encodeData:(id)arg0 ;
-(void)encodeDataWithPreceedingLength:(id)arg0 ;
-(void)encodeInteger:(unsigned int)arg0 ;
-(void)encodeString:(id)arg0 ;
-(void)encodeStringWithPreceedingLength:(id)arg0 ;


@end


#endif