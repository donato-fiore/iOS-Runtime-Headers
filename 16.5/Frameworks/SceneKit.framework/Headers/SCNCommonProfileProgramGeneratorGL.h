// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNCOMMONPROFILEPROGRAMGENERATORGL_H
#define SCNCOMMONPROFILEPROGRAMGENERATORGL_H



#import "SCNCommonProfileProgramGenerator.h"

@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator {
    int _profile;
}




-(?)_newProgramWithHashCode:(?)arg0 engineContextintrospectionDataPtr;
-(id)init;
-(id)initWithProfile:(int)arg0 ;
-(int)profile;


@end


#endif