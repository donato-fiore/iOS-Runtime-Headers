// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHACENAVIGATIONETA_H
#define SALOCALSEARCHACENAVIGATIONETA_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SADistance.h"
#import "SADuration.h"

@interface SALocalSearchAceNavigationEta : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SADistance *distanceEta;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SADuration *timeEta;


+(id)aceNavigationEta;
+(id)aceNavigationEtaWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif