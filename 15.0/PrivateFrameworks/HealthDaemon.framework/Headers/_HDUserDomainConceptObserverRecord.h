// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDUSERDOMAINCONCEPTOBSERVERRECORD_H
#define _HDUSERDOMAINCONCEPTOBSERVERRECORD_H

@class HKUserDomainConcept;

#import <Foundation/Foundation.h>


@interface _HDUserDomainConceptObserverRecord : NSObject

@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) HKUserDomainConcept *userDomainConcept; // ivar: _userDomainConcept


-(id)init;
-(id)initWithUserDomainConcept:(id)arg0 modificationType:(NSInteger)arg1 ;


@end


#endif