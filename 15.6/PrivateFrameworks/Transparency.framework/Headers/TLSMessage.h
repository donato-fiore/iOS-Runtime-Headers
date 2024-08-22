// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLSMESSAGE_H
#define TLSMESSAGE_H


#import <Foundation/Foundation.h>


@interface TLSMessage : NSObject



-(BOOL)encodeBool:(BOOL)arg0 buffer:(id)arg1 ;
-(BOOL)encodeByte:(unsigned char)arg0 buffer:(id)arg1 ;
-(BOOL)encodeByteArray:(id)arg0 minLength:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 buffer:(id)arg3 ;
-(BOOL)encodeExtensions:(id)arg0 buffer:(id)arg1 ;
-(BOOL)encodeHashValue:(id)arg0 buffer:(id)arg1 ;
-(BOOL)encodeUint64:(NSUInteger)arg0 buffer:(id)arg1 ;
-(BOOL)encodeVRFOutput:(id)arg0 buffer:(id)arg1 ;
-(char *)parseBool:(char *)arg0 end:(char *)arg1 result:(*BOOL)arg2 ;
-(char *)parseByte:(char *)arg0 end:(char *)arg1 result:(char *)arg2 ;
-(char *)parseByteArray:(char *)arg0 end:(char *)arg1 minLength:(NSUInteger)arg2 maxLength:(NSUInteger)arg3 result:(*id)arg4 ;
-(char *)parseExtensions:(char *)arg0 end:(char *)arg1 result:(*id)arg2 ;
-(char *)parseHashValue:(char *)arg0 end:(char *)arg1 result:(*id)arg2 ;
-(char *)parseUint64:(char *)arg0 end:(char *)arg1 result:(*NSUInteger)arg2 ;
-(char *)parseVRFOutput:(char *)arg0 end:(char *)arg1 result:(*id)arg2 ;


@end


#endif