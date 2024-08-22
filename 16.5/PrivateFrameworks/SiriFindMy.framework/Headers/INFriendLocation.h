// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFRIENDLOCATION_H
#define INFRIENDLOCATION_H

@class INObject, NSNumber;


#import "SpeakableLocation.h"

@interface INFriendLocation : INObject

@property (nonatomic, retain) NSNumber *isInaccurate;
@property (nonatomic, retain) NSNumber *isProactiveLocation;
@property (nonatomic, retain) NSNumber *locateInProgress;
@property (nonatomic, retain) SpeakableLocation *location;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif