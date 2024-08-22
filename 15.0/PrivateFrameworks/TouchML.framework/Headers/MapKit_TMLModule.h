// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPKIT_TMLMODULE_H
#define MAPKIT_TMLMODULE_H

@class NSString;
@protocol TMLModule;

#import <Foundation/Foundation.h>


@interface MapKit_TMLModule : NSObject <TMLModule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)loadModule;
+(void)defineConstants:(id)arg0 ;
+(void)initializeJSContext:(id)arg0 ;


@end


#endif