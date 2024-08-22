// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHCARROUTEOPTIONS_H
#define SALOCALSEARCHCARROUTEOPTIONS_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>



@property (nonatomic) BOOL avoidHighways;
@property (nonatomic) BOOL avoidTolls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)carRouteOptions;
+(id)carRouteOptionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif