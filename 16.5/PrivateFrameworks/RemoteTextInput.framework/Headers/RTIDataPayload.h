// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIDATAPAYLOAD_H
#define RTIDATAPAYLOAD_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTIDataPayload : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)payloadWithData:(id)arg0 ;
+(id)payloadWithData:(id)arg0 version:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 version:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif