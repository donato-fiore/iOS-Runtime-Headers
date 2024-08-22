// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKDRAGSESSIONCONTEXT_H
#define WKDRAGSESSIONCONTEXT_H


#import <Foundation/Foundation.h>


@interface WKDragSessionContext : NSObject {
    RetainPtr<NSMutableArray> _temporaryDirectories;
}




-(void)addTemporaryDirectory:(id)arg0 ;
-(void)cleanUpTemporaryDirectories;


@end


#endif