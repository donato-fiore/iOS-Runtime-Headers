// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRSIGNEDCLINICALDATAGROUPCONTEXT_H
#define HRSIGNEDCLINICALDATAGROUPCONTEXT_H

@class NSArray, HKSignedClinicalDataGroup;

#import <Foundation/Foundation.h>


@interface HRSignedClinicalDataGroupContext : NSObject {
    ? generatedQRImages;
}


@property (nonatomic, copy) NSArray *generatedQRImages;
@property (nonatomic, readonly) HKSignedClinicalDataGroup *group; // ivar: group


-(id)init;
-(id)initWithGroup:(id)arg0 ;


@end


#endif