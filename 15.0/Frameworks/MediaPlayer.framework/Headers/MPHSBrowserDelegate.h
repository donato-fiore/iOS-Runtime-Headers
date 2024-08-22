// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPHSBROWSERDELEGATE_H
#define MPHSBROWSERDELEGATE_H

@class NSString;
@protocol HSBrowserDelegate;

#import <Foundation/Foundation.h>


@interface MPHSBrowserDelegate : NSObject <HSBrowserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)browser:(id)arg0 didAddLibrary:(id)arg1 ;
-(void)browser:(id)arg0 didRemoveLibrary:(id)arg1 ;


@end


#endif