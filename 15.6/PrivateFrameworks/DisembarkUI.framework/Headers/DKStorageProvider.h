// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKSTORAGEPROVIDER_H
#define DKSTORAGEPROVIDER_H

@class NSString;
@protocol DKStorageProvider;

#import <Foundation/Foundation.h>


@interface DKStorageProvider : NSObject <DKStorageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)dataSize;


@end


#endif