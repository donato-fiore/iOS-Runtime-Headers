// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUANFDEBUGSETTINGSPROVIDER_H
#define NUANFDEBUGSETTINGSPROVIDER_H

@class NSString;
@protocol NUANFDebugSettingsProvider;

#import <Foundation/Foundation.h>


@interface NUANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL testingConditionEnabled; // ivar: _testingConditionEnabled
@property (readonly, nonatomic) BOOL viewportDebuggingEnabled; // ivar: _viewportDebuggingEnabled


-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif