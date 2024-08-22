// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCUSERACTIVITYDONATION_H
#define VCUSERACTIVITYDONATION_H

@class NSDate, NSString, INShortcut, NSUserActivity;
@protocol VCActionDonation;

#import <Foundation/Foundation.h>


@interface VCUserActivityDonation : NSObject <VCActionDonation>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) INShortcut *shortcut; // ivar: _shortcut
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id *uniqueProperty;
@property (readonly, nonatomic) NSUserActivity *userActivity;


+(id)timestampDateFormatter;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 identifier:(id)arg1 sourceAppIdentifier:(id)arg2 date:(id)arg3 ;


@end


#endif