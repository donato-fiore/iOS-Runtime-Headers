// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERITEMREPRESENTATION_H
#define WBSCYCLERITEMREPRESENTATION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WBSCyclerItemRepresentation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *extraAttributes; // ivar: _extraAttributes
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)pairsOfItemsWithDifferingExtraAttributesComparedTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif