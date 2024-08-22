// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCONFERENCEDESERIALIZATIONRESULT_H
#define EKCONFERENCEDESERIALIZATIONRESULT_H


#import <Foundation/Foundation.h>

#import "EKVirtualConference.h"

@interface EKConferenceDeserializationResult : NSObject

@property (readonly, nonatomic) EKVirtualConference *conference; // ivar: _conference
@property (readonly, nonatomic) _NSRange range; // ivar: _range


-(id)initWithConference:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif