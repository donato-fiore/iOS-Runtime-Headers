// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCONCRETEUSER_H
#define CRKASMCONCRETEUSER_H

@class NSString;
@protocol CRKASMUser, CRKClassKitPerson, CRKASMNameComponents;

#import <Foundation/Foundation.h>


@interface CRKASMConcreteUser : NSObject <CRKASMUser>



@property (readonly, copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, nonatomic) NSObject<CRKClassKitPerson> *backingPerson; // ivar: _backingPerson
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<CRKASMNameComponents> *nameComponents; // ivar: _nameComponents
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConcreteUser:(id)arg0 ;
-(id)initWithBackingPerson:(id)arg0 ;


@end


#endif