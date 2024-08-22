// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INROOTCODABLEDESCRIPTION_H
#define INROOTCODABLEDESCRIPTION_H

@class NSDictionary, NSArray;


#import "INCodableDescription.h"

@interface INRootCodableDescription : INCodableDescription {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSDictionary *_referencedCodableDescriptionsByClassName; // ivar: _referencedCodableDescriptionsByClassName
@property (retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions; // ivar: _referencedCodableDescriptions


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg0 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif