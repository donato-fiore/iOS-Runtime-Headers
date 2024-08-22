// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPERSONNAME_H
#define BMPERSONNAME_H

@class NSString;
@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "BMNameComponents.h"

@interface BMPersonName : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BMNameComponents *nameComponents; // ivar: _nameComponents


-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithName:(id)arg0 nameComponents:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;


@end


#endif