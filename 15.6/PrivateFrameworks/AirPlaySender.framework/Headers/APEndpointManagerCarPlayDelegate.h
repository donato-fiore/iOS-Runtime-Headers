// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APENDPOINTMANAGERCARPLAYDELEGATE_H
#define APENDPOINTMANAGERCARPLAYDELEGATE_H

@class NSString;
@protocol APCarPlayPolicyMonitorDelegate, APCarPlayPreferencesDelegate;

#import <Foundation/Foundation.h>


@interface APEndpointManagerCarPlayDelegate : NSObject <APCarPlayPolicyMonitorDelegate, APCarPlayPreferencesDelegate>

 {
    *OpaqueFigCFWeakReferenceHolder _weakManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEndpointManager:(struct OpaqueFigEndpointManager *)arg0 ;
-(void)dealloc;
-(void)setCarPlayEnabled:(BOOL)arg0 ;
-(void)setEndpoint:(struct OpaqueFigEndpoint *)arg0 isAllowed:(BOOL)arg1 ;


@end


#endif