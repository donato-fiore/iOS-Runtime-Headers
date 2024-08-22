// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WTFWEBFILEMANAGERDELEGATE_H
#define WTFWEBFILEMANAGERDELEGATE_H

@class NSString;
@protocol NSFileManagerDelegate;

#import <Foundation/Foundation.h>


@interface WTFWebFileManagerDelegate : NSObject <NSFileManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)fileManager:(id)arg0 shouldProceedAfterError:(id)arg1 movingItemAtURL:(id)arg2 toURL:(id)arg3 ;


@end


#endif