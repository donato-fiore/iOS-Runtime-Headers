// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZFXPLUGPROGRESSAPI_H
#define OZFXPLUGPROGRESSAPI_H

@class NSString;
@protocol FxProgressAPI, PROAPIObject;

#import <Foundation/Foundation.h>


@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProgressAPI;
+(void)releaseSharedProgressAPI;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(BOOL)updateProgress:(float)arg0 ;
-(BOOL)userHasCancelled;
-(id)init;
-(void)_setControl:(*void)arg0 ;


@end


#endif