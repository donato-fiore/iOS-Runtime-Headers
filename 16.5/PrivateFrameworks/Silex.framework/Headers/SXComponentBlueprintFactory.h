// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTBLUEPRINTFACTORY_H
#define SXCOMPONENTBLUEPRINTFACTORY_H

@class NSString;
@protocol SXComponentBlueprintFactory;

#import <Foundation/Foundation.h>


@interface SXComponentBlueprintFactory : NSObject <SXComponentBlueprintFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)componentBlueprintForComponent:(id)arg0 layout:(id)arg1 sizer:(id)arg2 ;


@end


#endif