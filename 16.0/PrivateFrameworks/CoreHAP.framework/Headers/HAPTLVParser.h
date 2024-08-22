// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPTLVPARSER_H
#define HAPTLVPARSER_H

@class HMFObject, NSData;



@interface HAPTLVParser : HMFObject {
    NSData *_tlvData;
}




+(id)parserWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)parseResponseForArray:(NSUInteger)arg0 ;
-(id)parseResponseForData:(NSUInteger)arg0 ;
-(id)parseResponseForNumber:(NSUInteger)arg0 ;
-(id)parseResponseForString:(NSUInteger)arg0 ;
-(id)parseResponseForUInt16:(NSUInteger)arg0 ;
-(id)parseResponseForUInt8:(NSUInteger)arg0 ;
-(id)parseResponseForUUID:(NSUInteger)arg0 ;


@end


#endif