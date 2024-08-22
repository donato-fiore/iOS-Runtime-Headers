// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLCONTAINERRELATION_H
#define CPLCONTAINERRELATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (nonatomic, getter=isKeyAsset) BOOL keyAsset; // ivar: _keyAsset
@property (nonatomic) NSInteger position; // ivar: _position


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)proposedIdentifierForItemIdentifier:(id)arg0 ;
-(id)proposedScopedIdentifierForItemScopedIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif