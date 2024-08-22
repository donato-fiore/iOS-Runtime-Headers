// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBFILEMANAGERDELEGATE_H
#define MBFILEMANAGERDELEGATE_H

@class NSString;
@protocol NSFileManagerDelegate;

#import <Foundation/Foundation.h>


@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *shouldCopyItemAtPathToPath; // ivar: _shouldCopyItemAtPathToPath
@property (readonly) Class superclass;


-(BOOL)fileManager:(id)arg0 shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2 ;


@end


#endif