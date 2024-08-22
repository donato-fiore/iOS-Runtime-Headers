// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPROTOCOL12_1_SHORT_H
#define ASPROTOCOL12_1_SHORT_H

@class 1;



@interface ASProtocol12_1_Short : 1



-(BOOL)commandStringNeedsSaveInSent;
-(BOOL)headerNeedsPolicyKey;
-(BOOL)headerNeedsProtocolVersion;
-(BOOL)headerNeedsUserAgent;
-(id)requestURLStringWithTask:(id)arg0 ;
-(unsigned char)shortProtocolVersion;


@end


#endif