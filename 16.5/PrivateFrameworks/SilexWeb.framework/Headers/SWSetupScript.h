// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSETUPSCRIPT_H
#define SWSETUPSCRIPT_H

@class NSString, WKUserScript;
@protocol SWScript;

#import <Foundation/Foundation.h>


@interface SWSetupScript : NSObject <SWScript>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *executableScript; // ivar: executableScript
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL queueable; // ivar: queueable
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserScript *userScript;




@end


#endif