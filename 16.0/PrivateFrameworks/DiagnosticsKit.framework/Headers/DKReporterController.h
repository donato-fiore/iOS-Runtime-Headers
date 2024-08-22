// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKREPORTERCONTROLLER_H
#define DKREPORTERCONTROLLER_H

@class NSString;
@protocol DKReporter_Internal, DKReporter, NSExtensionRequestHandling;

#import <Foundation/Foundation.h>

#import "DKComponentIdentity.h"
#import "DKReporterContext.h"

@interface DKReporterController : NSObject <DKReporter_Internal, DKReporter, NSExtensionRequestHandling>



@property (retain, nonatomic) DKComponentIdentity *componentIdentity; // ivar: _componentIdentity
@property (retain, nonatomic) DKReporterContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPresent;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)populateAttributes:(id)arg0 ;
-(void)setupWithContext:(id)arg0 ;
-(void)start;


@end


#endif