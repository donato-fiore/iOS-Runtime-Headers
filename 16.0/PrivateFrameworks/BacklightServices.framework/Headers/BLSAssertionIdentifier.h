// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSASSERTIONIDENTIFIER_H
#define BLSASSERTIONIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface BLSAssertionIdentifier : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>



@property (readonly, nonatomic) int clientPid; // ivar: _clientPid
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int hostPid; // ivar: _hostPid
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSUInteger)nextCount;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientPid:(int)arg0 hostPid:(int)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif