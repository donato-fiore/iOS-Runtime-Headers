// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLBLOCKSIGNALHANDLER_H
#define TMLBLOCKSIGNALHANDLER_H

@class NSString;
@protocol TMLSignalHandler;

#import <Foundation/Foundation.h>


@interface TMLBlockSignalHandler : NSObject <TMLSignalHandler>

 {
    id *_block;
    int _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)callWithArguments:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(void)attach;
-(void)detach;


@end


#endif