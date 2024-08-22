// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRORIGIN_H
#define MRORIGIN_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_MROriginProtobuf.h"
#import "MROrigin.h"

@interface MROrigin : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isHosted) BOOL hosted;
@property (nonatomic) int identifier; // ivar: _identifier
@property (nonatomic, getter=isLocal) BOOL local; // ivar: _local
@property (nonatomic, getter=isLocallyHosted) BOOL locallyHosted; // ivar: _locallyHosted
@property (readonly, nonatomic) _MROriginProtobuf *protobuf;
@property (readonly, nonatomic) MROrigin *skeleton;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)anyOrigin;
+(id)localOrigin;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(int)arg0 type:(NSInteger)arg1 displayName:(id)arg2 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif