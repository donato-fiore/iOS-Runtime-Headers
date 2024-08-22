// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHRECORDSCONCEPTSSUPPORT31USERDOMAINCONCEPTCHANGEPROVIDER_H
#define _TTC28HEALTHRECORDSCONCEPTSSUPPORT31USERDOMAINCONCEPTCHANGEPROVIDER_H

@protocol HKUserDomainConceptStoreDelegate;

#import <Foundation/Foundation.h>


@interface _TtC28HealthRecordsConceptsSupport31UserDomainConceptChangeProvider : NSObject <HKUserDomainConceptStoreDelegate>

 {
    ? udcStore;
    ? _udcChanges;
}




-(id)init;
-(void)userDomainConceptStore:(id)arg0 didAddUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptStore:(id)arg0 didDeleteUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptStore:(id)arg0 didUpdateUserDomainConcepts:(id)arg1 ;


@end


#endif