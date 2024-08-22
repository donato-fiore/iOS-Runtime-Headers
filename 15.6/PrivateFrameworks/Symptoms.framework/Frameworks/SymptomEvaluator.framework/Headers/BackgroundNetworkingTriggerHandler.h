// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BACKGROUNDNETWORKINGTRIGGERHANDLER_H
#define BACKGROUNDNETWORKINGTRIGGERHANDLER_H

@class NSString;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface BackgroundNetworkingTriggerHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)noteSymptom:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;


@end


#endif