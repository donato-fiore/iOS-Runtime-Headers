// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRESOLVERECIPIENTSSINGLERECIPIENTITEM_H
#define ASRESOLVERECIPIENTSSINGLERECIPIENTITEM_H

@class NSString;


#import "ASItem.h"
#import "ASResolveRecipientsAvailabilityItem.h"
#import "ASResolveRecipientsCertificatesItem.h"

@interface ASResolveRecipientsSingleRecipientItem : ASItem

@property (retain, nonatomic) ASResolveRecipientsAvailabilityItem *availability; // ivar: _availability
@property (retain, nonatomic) ASResolveRecipientsCertificatesItem *certificates; // ivar: _certificates
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;


@end


#endif