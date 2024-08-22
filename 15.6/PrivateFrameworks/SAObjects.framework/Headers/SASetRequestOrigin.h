// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETREQUESTORIGIN_H
#define SASETREQUESTORIGIN_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSNumber *age;
@property (nonatomic) CGFloat altitude;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *desiredAccuracy;
@property (nonatomic) CGFloat direction;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalAccuracy;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (copy, nonatomic) NSNumber *preciseLocationEnabled;
@property (copy, nonatomic) NSString *refId;
@property (nonatomic) CGFloat speed;
@property (copy, nonatomic) NSString *status;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat verticalAccuracy;


+(id)setRequestOrigin;
+(id)setRequestOriginWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif