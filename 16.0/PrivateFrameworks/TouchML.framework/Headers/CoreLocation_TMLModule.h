// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CORELOCATION_TMLMODULE_H
#define CORELOCATION_TMLMODULE_H

@class NSString;
@protocol TMLModule;

#import <Foundation/Foundation.h>


@interface CoreLocation_TMLModule : NSObject <TMLModule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)loadModule;
+(void)defineConstants:(id)arg0 ;
+(void)initializeJSContext:(id)arg0 ;


@end


#endif