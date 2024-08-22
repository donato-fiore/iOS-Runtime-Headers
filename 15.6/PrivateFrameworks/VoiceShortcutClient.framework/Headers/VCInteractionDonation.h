// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCINTERACTIONDONATION_H
#define VCINTERACTIONDONATION_H

@class NSDate, NSString, INInteraction, INShortcut;
@protocol VCActionDonation;

#import <Foundation/Foundation.h>


@interface VCInteractionDonation : NSObject <VCActionDonation>



@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (readonly, nonatomic) INShortcut *shortcut;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) id *uniqueProperty;


+(id)timestampDateFormatter;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sourceAppIdentifier:(id)arg1 interaction:(id)arg2 ;


@end


#endif