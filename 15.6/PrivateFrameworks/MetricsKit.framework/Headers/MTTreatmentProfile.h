// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTTREATMENTPROFILE_H
#define MTTREATMENTPROFILE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTTreatmentProfile : NSObject

@property (retain, nonatomic) NSArray *treatments; // ivar: _treatments


+(id)treatmentProfileWithConfigData:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)performTreatments:(id)arg0 ;


@end


#endif