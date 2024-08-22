// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUMESSAGEPRESENTER_H
#define NUMESSAGEPRESENTER_H

@class NSString;
@protocol SXMessagePresenter;

#import <Foundation/Foundation.h>


@interface NUMessagePresenter : NSObject <SXMessagePresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPresentMessage;
-(void)presentMessage:(id)arg0 ;


@end


#endif