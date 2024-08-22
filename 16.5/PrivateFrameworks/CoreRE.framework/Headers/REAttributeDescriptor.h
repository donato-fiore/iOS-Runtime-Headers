// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REATTRIBUTEDESCRIPTOR_H
#define REATTRIBUTEDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REAttributeDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger bufferSize;
@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int payloadOffset; // ivar: _payloadOffset
@property (readonly, nonatomic) unsigned int stride; // ivar: _stride


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithPayloadSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 buffer:(*void)arg1 elementSize:(NSUInteger)arg2 payloadBuilder:(*void)arg3 ;
-(id)initWithName:(id)arg0 payloadOffset:(unsigned int)arg1 count:(unsigned int)arg2 stride:(unsigned int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif