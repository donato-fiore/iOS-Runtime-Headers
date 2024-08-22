// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFAKEDISABLEDELEGATE_H
#define PKFAKEDISABLEDELEGATE_H

@class NSString;
@protocol PKScribbleInteractionDelegate;

#import <Foundation/Foundation.h>


@interface PKFakeDisableDelegate : NSObject <PKScribbleInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldAttachForView:(id)arg0 ;
+(id)_infoInProcess;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;


@end


#endif