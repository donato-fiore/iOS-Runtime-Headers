// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWATCHDATA_H
#define SAWATCHDATA_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAWatchData : AceObject <SAAceSerializable>



@property (nonatomic) BOOL configuredForLeftWrist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interfaceOrientation;
@property (readonly) Class superclass;
@property (nonatomic) BOOL victoryDevice;


+(id)watchData;
+(id)watchDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif