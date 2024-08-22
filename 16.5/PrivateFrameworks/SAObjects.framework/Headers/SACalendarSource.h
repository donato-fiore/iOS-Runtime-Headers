// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACALENDARSOURCE_H
#define SACALENDARSOURCE_H



#import "SASource.h"

@interface SACalendarSource : SASource

@property (nonatomic) BOOL strict;


+(id)source;
+(id)sourceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif