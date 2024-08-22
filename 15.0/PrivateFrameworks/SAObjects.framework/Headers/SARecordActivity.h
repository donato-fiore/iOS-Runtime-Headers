// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SARECORDACTIVITY_H
#define SARECORDACTIVITY_H



#import "SABaseClientBoundCommand.h"
#import "SAActivityObject.h"

@interface SARecordActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SAActivityObject *activity;


+(id)recordActivity;
+(id)recordActivityWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif