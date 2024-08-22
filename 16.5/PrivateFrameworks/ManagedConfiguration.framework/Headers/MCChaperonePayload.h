// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCCHAPERONEPAYLOAD_H
#define MCCHAPERONEPAYLOAD_H

@class NSNumber, NSData;


#import "MCPayload.h"

@interface MCChaperonePayload : MCPayload

@property (readonly, nonatomic) BOOL nonChaperonePairingAllowed; // ivar: _nonChaperonePairingAllowed
@property (readonly, nonatomic) NSNumber *nonChaperonePairingAllowedNum; // ivar: _nonChaperonePairingAllowedNum
@property (readonly, retain, nonatomic) NSData *pairingCertificateData; // ivar: _pairingCertificateData


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif