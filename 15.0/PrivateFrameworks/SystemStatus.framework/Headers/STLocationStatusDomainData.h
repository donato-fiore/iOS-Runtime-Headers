// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STLOCATIONSTATUSDOMAINDATA_H
#define STLOCATIONSTATUSDOMAINDATA_H

@class NSString, NSArray;
@protocol STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData;

#import <Foundation/Foundation.h>

#import "STActivityAttributionCatalog.h"

@interface STLocationStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>



@property (readonly, copy, nonatomic) STActivityAttributionCatalog *attributionCatalog; // ivar: _attributionCatalog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *locationAttributions;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithAttributionCatalog:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithAttributionCatalog:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif