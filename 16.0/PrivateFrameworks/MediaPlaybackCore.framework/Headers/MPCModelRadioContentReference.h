// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMODELRADIOCONTENTREFERENCE_H
#define MPCMODELRADIOCONTENTREFERENCE_H

@class ICRadioContentReference, MPIdentifierSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) ICRadioContentReference *ICRadioContentReference; // ivar: _ICRadioContentReference
@property (readonly, nonatomic) MPIdentifierSet *referenceModelObjectIdentifiers; // ivar: _referenceModelObjectIdentifiers


+(BOOL)supportsSecureCoding;
+(id)referenceWithMPModelObject:(id)arg0 ;
+(id)referenceWithMPModelObject:(id)arg0 containerModelPlayEvent:(id)arg1 ;
+(id)referenceWithStoreIdentifier:(id)arg0 trackInfo:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithICRadioContentReference:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif