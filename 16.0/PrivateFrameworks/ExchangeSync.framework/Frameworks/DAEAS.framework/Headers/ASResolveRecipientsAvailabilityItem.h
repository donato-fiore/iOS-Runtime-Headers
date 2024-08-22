// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRESOLVERECIPIENTSAVAILABILITYITEM_H
#define ASRESOLVERECIPIENTSAVAILABILITYITEM_H

@class NSNumber, NSString;


#import "ASItem.h"

@interface ASResolveRecipientsAvailabilityItem : ASItem

@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // ivar: _easStatus
@property (retain, nonatomic) NSString *mergedFreeBusy; // ivar: _mergedFreeBusy


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;


@end


#endif