// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACOMMANDSUPPORT_H
#define SACOMMANDSUPPORT_H

@class NSString, NSURL, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAObjectSupport.h"

@interface SACommandSupport : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *aceVersion;
@property (copy, nonatomic) NSString *commandId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAObjectSupport *resultSupport;
@property (copy, nonatomic) NSURL *serverEndpoint;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedConstraints;
@property (nonatomic) NSInteger weight;


+(id)commandSupport;
+(id)commandSupportWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif