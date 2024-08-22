// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSHARINGRECORD_H
#define PGSHARINGRECORD_H

@class PHAsset, NSString, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PGSharingRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSString *assetLocalIdentifier; // ivar: _assetLocalIdentifier
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *momentLocalIdentifier; // ivar: _momentLocalIdentifier
@property (readonly, nonatomic) NSArray *persons; // ivar: _persons
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 date:(id)arg1 persons:(id)arg2 momentLocalIdentifier:(id)arg3 asset:(id)arg4 ;
-(id)initWithType:(NSUInteger)arg0 date:(id)arg1 persons:(id)arg2 momentLocalIdentifier:(id)arg3 assetLocalIdentifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForPersistence;


@end


#endif