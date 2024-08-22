// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREFAMILYMEMBERCONTACTSMODEL_H
#define CNUICOREFAMILYMEMBERCONTACTSMODEL_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyMemberContactsModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif