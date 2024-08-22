// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTFETCHPERSONAUNIQUESTRINGS_H
#define MCMRESULTFETCHPERSONAUNIQUESTRINGS_H

@class NSSet;


#import "MCMResultBase.h"

@interface MCMResultFetchPersonaUniqueStrings : MCMResultBase

@property (retain, nonatomic) NSSet *personaUniqueStrings; // ivar: _personaUniqueStrings


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithPersonaUniqueStrings:(id)arg0 ;


@end


#endif