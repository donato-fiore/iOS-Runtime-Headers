// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDECODER_H
#define CSDECODER_H

@class NSData;
@protocol CSCoderData;

#import <Foundation/Foundation.h>


@interface CSDecoder : NSObject <CSCoderData>



@property (retain, nonatomic) id *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) *__CFAllocator contentDeallocator; // ivar: _contentDeallocator
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) ? obj; // ivar: _obj


+(id)decodeURLPreservingSecurityScope:(id)arg0 ;
-(id)debugDescription;
-(id)decode;
-(id)decodeObject:(struct ? )arg0 ;
-(id)decodeObjectNoCopy:(struct ? )arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 obj:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif