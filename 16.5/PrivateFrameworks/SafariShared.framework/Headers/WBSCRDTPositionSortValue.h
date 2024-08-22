// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCRDTPOSITIONSORTVALUE_H
#define WBSCRDTPOSITIONSORTVALUE_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSCRDTPositionSortValue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger changeID; // ivar: _changeID
@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSInteger sortValue; // ivar: _sortValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPositionSortValue:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSortValue:(NSInteger)arg0 deviceIdentifier:(id)arg1 changeID:(NSInteger)arg2 ;
-(id)positionSortValueWithChangeID:(NSInteger)arg0 ;
-(id)positionSortValueWithSortValue:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif