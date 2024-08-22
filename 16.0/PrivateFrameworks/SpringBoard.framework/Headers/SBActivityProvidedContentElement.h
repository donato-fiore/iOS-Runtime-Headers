// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBACTIVITYPROVIDEDCONTENTELEMENT_H
#define SBACTIVITYPROVIDEDCONTENTELEMENT_H

@class NSString;
@protocol SAActivityBehavior, SAActivityHosting;


#import "SBSystemApertureProvidedContentElement.h"

@interface SBActivityProvidedContentElement : SBSystemApertureProvidedContentElement <SAActivityBehavior>



@property (weak, nonatomic) NSObject<SAActivityHosting> *activityHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasActivityBehavior;


@end


#endif