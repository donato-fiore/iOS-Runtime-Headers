// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCCANCEL_H
#define OCCANCEL_H

@class NSString;
@protocol TCCancelDelegate;

#import <Foundation/Foundation.h>


@interface OCCancel : NSObject <TCCancelDelegate>

 {
    BOOL mIsCancelled;
    BOOL mIsQuit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCancelled;
-(BOOL)isQuit;
-(id)init;
-(void)cancel;
-(void)quit;


@end


#endif