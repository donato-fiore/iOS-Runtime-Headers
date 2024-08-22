// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMORDEREDIDENTIFIERMAP_H
#define REMORDEREDIDENTIFIERMAP_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REMOrderedIdentifierMap : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *orderedIdentifiers; // ivar: _orderedIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrderedIdentifiers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif