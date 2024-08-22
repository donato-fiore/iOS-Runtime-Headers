// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMSTOREINVOCATIONVALUESTORAGE_H
#define REMSTOREINVOCATIONVALUESTORAGE_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REMStoreInvocationValueStorage : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *valueStorage; // ivar: _valueStorage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)storedPropertyForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)storeProperty:(id)arg0 forKey:(id)arg1 ;


@end


#endif