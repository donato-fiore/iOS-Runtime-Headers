// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCOUNT_H
#define ACCOUNT_H

@class INObject, NSString, NSNumber, NSData;



@interface Account : INObject

@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *homeUserID;
@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, retain) NSNumber *isActive;
@property (nonatomic) BOOL matchedMultiple;
@property (nonatomic) BOOL noNameMatched;
@property (nonatomic, copy) NSString *profileId;
@property (nonatomic, copy) NSData *profileImage;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif