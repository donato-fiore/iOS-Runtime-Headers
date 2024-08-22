// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STFOCUSSTATUSDOMAINDATA_H
#define STFOCUSSTATUSDOMAINDATA_H

@class NSString;
@protocol STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData;

#import <Foundation/Foundation.h>


@interface STFocusStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (readonly, copy, nonatomic) NSString *modeName; // ivar: _modeName
@property (readonly, copy, nonatomic) NSString *modeSymbol; // ivar: _modeSymbol
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithModeIdentifier:(id)arg0 modeName:(id)arg1 modeSymbol:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif