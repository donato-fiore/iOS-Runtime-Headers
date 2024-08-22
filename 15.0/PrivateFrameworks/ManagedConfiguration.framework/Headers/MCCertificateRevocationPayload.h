// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCCERTIFICATEREVOCATIONPAYLOAD_H
#define MCCERTIFICATEREVOCATIONPAYLOAD_H

@class NSArray;


#import "MCPayload.h"

@interface MCCertificateRevocationPayload : MCPayload

@property (readonly, nonatomic) NSArray *hashDictionaries; // ivar: _hashDictionaries


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)verboseDescription;


@end


#endif