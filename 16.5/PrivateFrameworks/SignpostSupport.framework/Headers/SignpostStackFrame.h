// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSTACKFRAME_H
#define SIGNPOSTSTACKFRAME_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface SignpostStackFrame : NSObject

@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSUUID *symbolOwnerUUID; // ivar: _symbolOwnerUUID


-(BOOL)isEqual:(id)arg0 ;
-(id)_serializableArrayRepresentation;
-(id)debugDescription;
-(id)initWithArrayRepresentation:(id)arg0 ;
-(id)initWithUUID:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif