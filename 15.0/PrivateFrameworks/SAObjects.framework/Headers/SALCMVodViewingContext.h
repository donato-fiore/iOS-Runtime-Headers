// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALCMVODVIEWINGCONTEXT_H
#define SALCMVODVIEWINGCONTEXT_H

@class NSDate;


#import "SALCMViewingContext.h"

@interface SALCMVodViewingContext : SALCMViewingContext

@property (copy, nonatomic) NSDate *originalEventStartTime;


+(id)vodViewingContext;
+(id)vodViewingContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif