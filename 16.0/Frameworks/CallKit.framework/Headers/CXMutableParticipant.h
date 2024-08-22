// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXMUTABLEPARTICIPANT_H
#define CXMUTABLEPARTICIPANT_H

@class NSURL, NSString;


#import "CXParticipant.h"

@interface CXMutableParticipant : CXParticipant

@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name;




@end


#endif