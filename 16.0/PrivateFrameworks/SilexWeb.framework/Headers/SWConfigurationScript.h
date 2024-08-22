// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWCONFIGURATIONSCRIPT_H
#define SWCONFIGURATIONSCRIPT_H

@class NSString, WKUserScript;
@protocol SWScript;

#import <Foundation/Foundation.h>


@interface SWConfigurationScript : NSObject <SWScript>



@property (readonly, copy, nonatomic) NSString *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *executableScript;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL queueable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserScript *userScript; // ivar: userScript


-(id)initWithConfiguration:(id)arg0 ;


@end


#endif