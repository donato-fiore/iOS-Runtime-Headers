// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCONTACTDETAILSUPERVISION_H
#define SGCONTACTDETAILSUPERVISION_H

@class NSDate, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SGContactDetailSupervision : NSObject

@property (nonatomic) NSUInteger ignoreAfter; // ivar: _ignoreAfter
@property (nonatomic) BOOL isFirstPerson; // ivar: _isFirstPerson
@property (nonatomic) BOOL isThirdPerson; // ivar: _isThirdPerson
@property (nonatomic) BOOL isUnlikelyPhone; // ivar: _isUnlikelyPhone
@property (weak, nonatomic) NSDate *matchDate; // ivar: _matchDate
@property (readonly, nonatomic) NSArray *matchingContacts; // ivar: _matchingContacts
@property (nonatomic) BOOL regexBelongsToSender; // ivar: _regexBelongsToSender
@property (nonatomic) BOOL regexDoesNotBelongToSender; // ivar: _regexDoesNotBelongToSender
@property (weak, nonatomic) NSString *senderDisplayName; // ivar: _senderDisplayName


-(id)initWithMessage:(id)arg0 ddMatch:(id)arg1 isUnlikelyPhone:(BOOL)arg2 ;
-(struct SGMContactDetailFoundIn_ )metricsContactDetailFoundIn;
-(struct SGMContactDetailOwner_ )metricsContactDetailOwner;


@end


#endif