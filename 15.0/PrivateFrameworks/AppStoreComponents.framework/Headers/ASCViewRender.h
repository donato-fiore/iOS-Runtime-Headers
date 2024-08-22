// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCVIEWRENDER_H
#define ASCVIEWRENDER_H

@class NSString;
@protocol ASCSignpostGroup;

#import <Foundation/Foundation.h>


@interface ASCViewRender : NSObject <ASCSignpostGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)category;
+(id)log;
+(id)requiredFieldNames;
+(id)subsystem;
+(void)bootstrapDidBeginWithTag:(NSUInteger)arg0 ;
+(void)bootstrapDidEndWithTag:(NSUInteger)arg0 ;
+(void)jsCallDidBeginWithTag:(NSUInteger)arg0 ;
+(void)jsCallDidEndWithTag:(NSUInteger)arg0 ;
+(void)jsStackBootstrapDidBeginWithTag:(NSUInteger)arg0 ;
+(void)jsStackBootstrapDidEndWithTag:(NSUInteger)arg0 ;
+(void)launchCorrelationKeyWithTag:(NSUInteger)arg0 withString:(id)arg1 ;
+(void)modelPrefetchDidBeginWithTag:(NSUInteger)arg0 ;
+(void)modelPrefetchDidEndWithTag:(NSUInteger)arg0 ;
+(void)overlayRequestedWithTag:(NSUInteger)arg0 ;
+(void)pageRequestedWithTag:(NSUInteger)arg0 ;
+(void)pageUserReadyWithTag:(NSUInteger)arg0 ;
+(void)requestDidBeginWithTag:(NSUInteger)arg0 ;
+(void)requestDidEndWithTag:(NSUInteger)arg0 ;
+(void)resourceRequestDidBeginWithTag:(NSUInteger)arg0 ;
+(void)resourceRequestDidEndWithTag:(NSUInteger)arg0 ;
+(void)rootViewModelParseDidBeginWithTag:(NSUInteger)arg0 ;
+(void)rootViewModelParseDidEndWithTag:(NSUInteger)arg0 ;
+(void)rootViewModelPresentWithTag:(NSUInteger)arg0 ;
+(void)willEmitSignpostOfType:(NSInteger)arg0 withName:(id)arg1 ;


@end


#endif