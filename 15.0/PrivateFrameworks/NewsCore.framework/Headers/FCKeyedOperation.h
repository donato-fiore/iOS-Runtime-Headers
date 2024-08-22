// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCKEYEDOPERATION_H
#define FCKEYEDOPERATION_H

@class NSString;
@protocol FCOperationCanceling;

#import <Foundation/Foundation.h>


@interface FCKeyedOperation : NSObject <FCOperationCanceling>

 {
    BOOL _cancelled;
    id<FCOperationCanceling> *_cancelHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancel;


@end


#endif