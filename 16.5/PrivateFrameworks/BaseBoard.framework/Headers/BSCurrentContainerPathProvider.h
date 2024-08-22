// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSCURRENTCONTAINERPATHPROVIDER_H
#define BSCURRENTCONTAINERPATHPROVIDER_H

@class NSURL, NSString;
@protocol BSPathProviding;

#import <Foundation/Foundation.h>


@interface BSCurrentContainerPathProvider : NSObject <BSPathProviding>



@property (readonly, nonatomic) NSURL *cachesPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *defaultPath;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *libraryPath;
@property (readonly) Class superclass;




@end


#endif