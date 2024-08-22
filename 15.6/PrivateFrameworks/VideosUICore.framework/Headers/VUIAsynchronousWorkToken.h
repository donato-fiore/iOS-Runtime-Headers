// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIASYNCHRONOUSWORKTOKEN_H
#define VUIASYNCHRONOUSWORKTOKEN_H

@class NSOperation;

#import <Foundation/Foundation.h>


@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation; // ivar: _operation


-(id)init;
-(id)initWithOperation:(id)arg0 ;
-(void)cancel;


@end


#endif