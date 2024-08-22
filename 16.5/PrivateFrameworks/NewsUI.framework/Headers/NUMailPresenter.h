// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUMAILPRESENTER_H
#define NUMAILPRESENTER_H

@class NSString;
@protocol SXMailPresenter;

#import <Foundation/Foundation.h>


@interface NUMailPresenter : NSObject <SXMailPresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canComposeMail;
-(void)presentMail:(id)arg0 ;


@end


#endif