// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMMOMENTSPARTICIPANT_H
#define PXCMMMOMENTSPARTICIPANT_H

@class NSString, PHPerson;


#import "PXRecipient.h"

@interface PXCMMMomentsParticipant : PXRecipient {
    NSString *_additionalLocalizedName;
}


@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(id)initWithEmailAddress:(id)arg0 phoneNumber:(id)arg1 localizedName:(id)arg2 ;
-(id)initWithPerson:(id)arg0 ;
-(id)localizedName;


@end


#endif