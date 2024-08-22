// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDUSERDOMAINCONCEPTMANAGERMODIFICATIONOPERATION_H
#define _HDUSERDOMAINCONCEPTMANAGERMODIFICATIONOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface _HDUserDomainConceptManagerModificationOperation : HDJournalableOperation

@property (readonly, nonatomic) NSInteger method; // ivar: _method
@property (readonly, nonatomic) NSInteger syncIdentity; // ivar: _syncIdentity
@property (readonly, nonatomic) NSInteger syncProvenance; // ivar: _syncProvenance
@property (readonly, nonatomic) ? syncVersion; // ivar: _syncVersion
@property (readonly, nonatomic) NSArray *userDomainConcepts; // ivar: _userDomainConcepts


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserDomainConcepts:(id)arg0 method:(NSInteger)arg1 syncProvenance:(NSInteger)arg2 syncIdentity:(NSInteger)arg3 syncVersion:(struct ? )arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif