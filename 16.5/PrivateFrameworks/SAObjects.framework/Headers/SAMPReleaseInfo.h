// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPRELEASEINFO_H
#define SAMPRELEASEINFO_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SACalendar.h"

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SACalendar *releaseDate;
@property (nonatomic) NSInteger releaseYear;
@property (readonly) Class superclass;


+(id)releaseInfo;
+(id)releaseInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif