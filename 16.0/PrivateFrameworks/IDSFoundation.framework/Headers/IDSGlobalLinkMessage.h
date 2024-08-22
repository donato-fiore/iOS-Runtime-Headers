// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGLOBALLINKMESSAGE_H
#define IDSGLOBALLINKMESSAGE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface IDSGlobalLinkMessage : NSObject {
    IDSGlobalLinkAttribute _attributes;
    int _numAttribute;
}


@property (readonly, nonatomic) NSInteger command; // ivar: _command
@property (readonly) NSData *hmacKeyData; // ivar: _hmacKeyData


+(id)messageWithBuffer:(char *)arg0 length:(int)arg1 ;
+(id)messageWithCommand:(NSInteger)arg0 attributes:(id)arg1 ;
-(BOOL)_addAttribute:(struct IDSGlobalLinkAttribute *)arg0 ;
-(BOOL)getAttribute:(NSInteger)arg0 attribute:(struct IDSGlobalLinkAttribute *)arg1 ;
-(BOOL)read:(char *)arg0 inputLength:(int)arg1 ;
-(BOOL)verifyHMacDigestWithKey:(id)arg0 inputBuffer:(char *)arg1 inputLength:(int)arg2 ;
-(BOOL)write:(char *)arg0 outputLength:(*int)arg1 ;
-(id)initWithCommand:(NSInteger)arg0 ;
-(void)_addAddressAttribute:(NSInteger)arg0 value:(struct sockaddr *)arg1 ;
-(void)_addBinaryDataAttribute:(NSInteger)arg0 value:(id)arg1 ;
-(void)_addUInt16Attribute:(NSInteger)arg0 value:(unsigned short)arg1 ;
-(void)_addUInt32Attribute:(NSInteger)arg0 value:(unsigned int)arg1 ;
-(void)_addUInt64Attribute:(NSInteger)arg0 value:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)setAttributes:(id)arg0 ;


@end


#endif