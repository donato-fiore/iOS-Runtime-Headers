// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOEVENTENTRY_H
#define HMIVIDEOEVENTENTRY_H

@class HMFObject, NSString;
@protocol HMIVideoEvent;



@interface HMIVideoEventEntry : HMFObject <HMIVideoEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) ? time; // ivar: _time
@property (readonly) id *value; // ivar: _value


-(id)initWithValue:(id)arg0 time:(struct ? )arg1 ;


@end


#endif