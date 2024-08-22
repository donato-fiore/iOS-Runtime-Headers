// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNEDDURATION_H
#define SIGNEDDURATION_H

@class INObject, NSNumber;



@interface SignedDuration : INObject

@property (nonatomic) NSInteger direction;
@property (nonatomic, retain) NSNumber *duration;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif