// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPFILEMANAGERFIXPERMDELEGATE_H
#define FPFILEMANAGERFIXPERMDELEGATE_H

@class NSString;
@protocol NSFileManagerDelegate;

#import <Foundation/Foundation.h>


@interface FPFileManagerFixPermDelegate : NSObject <NSFileManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)fileManager:(id)arg0 shouldRemoveItemAtURL:(id)arg1 ;


@end


#endif