// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMOBJECTID_H
#define EMOBJECTID_H

@class NSString, NSData, EFStringHash;
@protocol EFLoggable, EFCacheable, NSSecureCoding, NSCopying, NSObject><NSSecureCoding><NSCopying;

#import <Foundation/Foundation.h>


@interface EMObjectID : NSObject <EFLoggable, EFCacheable, NSSecureCoding, NSCopying>

 {
    NSUInteger _hash;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEphemeral) BOOL ephemeral; // ivar: _ephemeral
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<NSObject><NSSecureCoding><NSCopying> *representedObjectID; // ivar: _representedObjectID
@property (readonly, copy, nonatomic) NSData *serializedRepresentation;
@property (readonly) EFStringHash *stringHash; // ivar: _stringHash
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_decodableClasses;
+(id)log;
+(id)objectIDFromSerializedRepresentation:(id)arg0 ;
+(void)addDecodableClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)cachedSelf;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initAsEphemeralID:(BOOL)arg0 ;
-(id)initAsEphemeralID:(BOOL)arg0 representedObjectID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRepresentedObjectID:(id)arg0 ;
-(void)_commonInitAsEphemeralID:(BOOL)arg0 representedObjectID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif