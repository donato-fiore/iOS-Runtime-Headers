// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHSTOREIDENTIFIER_H
#define HKHEALTHSTOREIDENTIFIER_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKProfileIdentifier.h"

@interface HKHealthStoreIdentifier : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, getter=isPrimaryStoreIdentifier) BOOL primaryStoreIdentifier;
@property (readonly, copy) HKProfileIdentifier *profileIdentifier;


+(BOOL)supportsSecureCoding;
+(id)identifierFromProfileIdentifier:(id)arg0 ;
+(id)primaryStoreIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initPrimaryStoreIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif