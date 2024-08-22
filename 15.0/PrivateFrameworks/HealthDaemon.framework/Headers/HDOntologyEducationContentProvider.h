// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDONTOLOGYEDUCATIONCONTENTPROVIDER_H
#define HDONTOLOGYEDUCATIONCONTENTPROVIDER_H


#import <Foundation/Foundation.h>


@interface HDOntologyEducationContentProvider : NSObject



+(BOOL)educationContentForConceptWithIdentifier:(id)arg0 ontologyTransaction:(id)arg1 educationContentOut:(*id)arg2 error:(*id)arg3 ;
+(BOOL)educationContentForConceptWithIdentifier:(id)arg0 profile:(id)arg1 educationContentOut:(*id)arg2 error:(*id)arg3 ;


@end


#endif