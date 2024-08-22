// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRESOLVERECIPIENTSCERTIFICATESITEM_H
#define ASRESOLVERECIPIENTSCERTIFICATESITEM_H

@class NSNumber, NSArray, NSMutableArray;


#import "ASItem.h"

@interface ASResolveRecipientsCertificatesItem : ASItem

@property (retain, nonatomic) NSNumber *certCount; // ivar: _certCount
@property (readonly, nonatomic) NSArray *certificates;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // ivar: _easStatus
@property (retain, nonatomic) NSMutableArray *mCertificates; // ivar: _mCertificates
@property (retain, nonatomic) NSNumber *recipientCount; // ivar: _recipientCount


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(void)addCertificateString:(id)arg0 ;


@end


#endif