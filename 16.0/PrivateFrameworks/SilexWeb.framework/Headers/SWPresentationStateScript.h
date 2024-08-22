// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWPRESENTATIONSTATESCRIPT_H
#define SWPRESENTATIONSTATESCRIPT_H

@class NSString, WKUserScript;
@protocol SWScript;

#import <Foundation/Foundation.h>


@interface SWPresentationStateScript : NSObject <SWScript>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *executableScript;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUInteger presentationState; // ivar: _presentationState
@property (readonly, nonatomic) BOOL queueable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserScript *userScript; // ivar: userScript


-(id)initWithPresentationState:(NSUInteger)arg0 ;


@end


#endif