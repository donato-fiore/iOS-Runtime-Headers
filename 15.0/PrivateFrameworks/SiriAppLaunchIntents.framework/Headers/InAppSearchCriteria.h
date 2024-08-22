// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INAPPSEARCHCRITERIA_H
#define INAPPSEARCHCRITERIA_H

@class INObject, NSString;



@interface InAppSearchCriteria : INObject

@property (nonatomic, copy) NSString *query;
@property (nonatomic) NSInteger verb;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif