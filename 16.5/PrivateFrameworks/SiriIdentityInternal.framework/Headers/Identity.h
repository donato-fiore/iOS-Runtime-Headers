// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDENTITY_H
#define IDENTITY_H

@class INObject, NSNumber, NSString;



@interface Identity : INObject

@property (nonatomic, retain) NSNumber *fullConfidence;
@property (nonatomic, retain) NSNumber *isIdentifiedOrUnsure;
@property (nonatomic, retain) NSNumber *isMultiUserContext;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *negativeName;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, retain) NSNumber *setupInProgress;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif