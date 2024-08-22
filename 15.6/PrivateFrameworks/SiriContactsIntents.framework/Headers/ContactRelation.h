// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONTACTRELATION_H
#define CONTACTRELATION_H

@class INObject, NSString;



@interface ContactRelation : INObject

@property (nonatomic, copy) NSString *relatedFullName;
@property (nonatomic, copy) NSString *relationship;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif