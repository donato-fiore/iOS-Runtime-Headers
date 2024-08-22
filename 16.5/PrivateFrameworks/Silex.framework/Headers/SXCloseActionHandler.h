// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCLOSEACTIONHANDLER_H
#define SXCLOSEACTIONHANDLER_H

@class NSString;
@protocol SXCloseActionHandler;

#import <Foundation/Foundation.h>


@interface SXCloseActionHandler : NSObject <SXCloseActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleCloseActionOnPresenter:(id)arg0 ;


@end


#endif