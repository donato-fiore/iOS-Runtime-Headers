// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSEXTENSION_PKSUBSYSTEM_H
#define CSEXTENSION_PKSUBSYSTEM_H

@class NSString;
@protocol PKModularService;

#import <Foundation/Foundation.h>


@interface CSExtension_PKSubsystem : NSObject <PKModularService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)initForPlugInKit;
+(id)sharedInstance;
-(id)principleClassFromDictionary:(id)arg0 ;
-(void)beginUsing:(id)arg0 withBundle:(id)arg1 ;
-(void)endUsing:(id)arg0 ;


@end


#endif