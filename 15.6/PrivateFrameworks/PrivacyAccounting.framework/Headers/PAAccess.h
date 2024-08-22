// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAACCESS_H
#define PAACCESS_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding, BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "PAApplication.h"

@interface PAAccess : NSObject <NSCopying, NSSecureCoding, BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) PAApplication *accessor; // ivar: _accessor
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *descriptionForCategory;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestampAdjustment; // ivar: _timestampAdjustment


+(BOOL)supportsSecureCoding;
+(id)allAccessClasses;
+(id)eventStreamIdentifier;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccess:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(NSUInteger)hashWithOptions:(NSUInteger)arg0 ;
-(id)JSONObject;
-(id)copyWithNewAccessor:(id)arg0 ;
-(id)copyWithNewIdentifier:(id)arg0 ;
-(id)copyWithNewKind:(NSInteger)arg0 ;
-(id)copyWithNewTimestampAdjustment:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initWithAccessor:(id)arg0 ;
-(id)initWithAccessor:(id)arg0 identifier:(id)arg1 kind:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif