// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSECTIONEDIDENTIFIERLISTPOSITION_H
#define MPSECTIONEDIDENTIFIERLISTPOSITION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPSectionedIdentifierListPosition : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger entryType; // ivar: _entryType
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier


+(BOOL)supportsSecureCoding;
+(id)positionForHeadOfSection:(id)arg0 ;
+(id)positionForItem:(id)arg0 inSection:(id)arg1 ;
+(id)positionForTailOfSection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif