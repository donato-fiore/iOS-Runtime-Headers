// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPACTIONLOCATORACCESSTOKEN_H
#define FPACTIONLOCATORACCESSTOKEN_H

@class NSString;
@protocol FPActionLocatorAccess;

#import <Foundation/Foundation.h>


@interface FPActionLocatorAccessToken : NSObject <FPActionLocatorAccess>

 {
    id *_stopBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tokenWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)stopAccessing;


@end


#endif