// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXWEBCONTENTCOMPONENTINTERACTIONHANDLER_H
#define SXWEBCONTENTCOMPONENTINTERACTIONHANDLER_H

@class NSString;
@protocol SXComponentInteractionHandler, SWInteraction;

#import <Foundation/Foundation.h>


@interface SXWebContentComponentInteractionHandler : NSObject <SXComponentInteractionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWInteraction> *interaction; // ivar: _interaction
@property (readonly) Class superclass;


-(id)initWithInteraction:(id)arg0 ;
-(void)handleInteractionType:(NSUInteger)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 ;


@end


#endif