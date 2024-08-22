// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELREQUEST_H
#define MPMODELREQUEST_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPModelKind.h"
#import "MPPropertySet.h"

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) Class itemClass;
@property (retain, nonatomic) MPModelKind *itemKind; // ivar: _itemKind
@property (copy, nonatomic) MPPropertySet *itemProperties; // ivar: _itemProperties
@property (copy, nonatomic) NSArray *itemSortDescriptors; // ivar: _itemSortDescriptors
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) Class sectionClass;
@property (retain, nonatomic) MPModelKind *sectionKind; // ivar: _sectionKind
@property (copy, nonatomic) MPPropertySet *sectionProperties; // ivar: _sectionProperties
@property (copy, nonatomic) NSArray *sectionSortDescriptors; // ivar: _sectionSortDescriptors


+(BOOL)requiresNetwork;
+(BOOL)supportsSecureCoding;
+(id)preferredQueue;
+(id)sharedNetworkQueue;
+(id)sharedQueue;
-(id)_kindForClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif