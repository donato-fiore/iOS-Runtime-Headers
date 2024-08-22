// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRESTRICTIONARRAY_H
#define CRESTRICTIONARRAY_H

@protocol RestrictionProtocol;

#import <Foundation/Foundation.h>


@interface cRestrictionArray : NSObject

@property (readonly) BOOL isPresent; // ivar: _isPresent
@property (retain) NSObject<RestrictionProtocol> *restriction; // ivar: _restriction


-(id)init;
-(id)initWithRestriction:(id)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif