// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHREVIEW_H
#define SALOCALSEARCHREVIEW_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SACalendar.h"
#import "SAUIAppPunchOut.h"
#import "SALocalSearchRating.h"

@interface SALocalSearchReview : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SACalendar *lastUpdated;
@property (copy, nonatomic) NSString *publication;
@property (retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;
@property (retain, nonatomic) SALocalSearchRating *reviewRating;
@property (readonly) Class superclass;


+(id)review;
+(id)reviewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif