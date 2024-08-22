// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMSENDER_H
#define EMSENDER_H

@class EFLocked, NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface EMSender : NSObject <NSSecureCoding, NSCopying>

 {
    EFAtomicObject _displayName;
    EFLocked *_addresses;
}


@property (readonly, copy, nonatomic) NSArray *addresses;
@property NSInteger bucket; // ivar: _bucket
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property NSInteger databaseID; // ivar: _databaseID
@property (readonly, copy, nonatomic) NSString *displayName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bestDisplayNameFromDisplayNames:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatabaseID:(NSInteger)arg0 addresses:(id)arg1 contactIdentifier:(id)arg2 bucket:(NSInteger)arg3 ;
-(void)addAddress:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAddress:(id)arg0 ;


@end


#endif