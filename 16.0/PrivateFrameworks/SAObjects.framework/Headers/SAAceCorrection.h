// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAACECORRECTION_H
#define SAACECORRECTION_H

@class NSData, NSString;


#import "SADomainObject.h"

@interface SAAceCorrection : SADomainObject

@property (copy, nonatomic) NSData *correctionEntryData;
@property (copy, nonatomic) NSString *debugString;


+(id)aceCorrection;
+(id)aceCorrectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif