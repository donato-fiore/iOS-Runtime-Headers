// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JETREATMENTPROFILE_H
#define JETREATMENTPROFILE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface JETreatmentProfile : NSObject {
    NSArray *_treatments;
}




+(id)treatmentProfileWithConfiguration:(id)arg0 ;
+(id)treatmentProfileWithConfiguration:(id)arg0 topic:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg0 topic:(id)arg1 ;
-(id)performTreatments:(id)arg0 ;


@end


#endif