// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMAILRESULTBUILDER_H
#define SSMAILRESULTBUILDER_H

@class NSString, NSDate, NSArray;


#import "SSResultBuilder.h"

@interface SSMailResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *author; // ivar: _author
@property (retain, nonatomic) NSString *authorEmail; // ivar: _authorEmail
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSArray *recipientEmails; // ivar: _recipientEmails
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
+(id)getFirstNameFromString:(id)arg0 ;
-(id)buildCompactCardSection;
-(id)buildInlineCardSections;
-(id)buildRecipientsString;
-(id)fallbackTitleString;
-(id)initWithResult:(id)arg0 ;
-(id)subclassBuildHorizontallyScrollingCardSection;


@end


#endif