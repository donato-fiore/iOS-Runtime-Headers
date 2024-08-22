// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SARADARSETDETAILS_H
#define SARADARSETDETAILS_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *classification;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *title;


+(id)setDetails;
+(id)setDetailsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif