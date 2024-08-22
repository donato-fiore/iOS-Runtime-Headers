// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INFRIEND_H
#define INFRIEND_H

@class INObject, NSNumber, INPerson;



@interface INFriend : INObject

@property (nonatomic, retain) NSNumber *followsMyLocation;
@property (nonatomic, retain) INPerson *person;
@property (nonatomic, retain) NSNumber *sharesLocation;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif