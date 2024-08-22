// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSILOIDLEHANDLER_H
#define CLSILOIDLEHANDLER_H


#import <Foundation/Foundation.h>


@interface CLSiloIdleHandler : NSObject

@property (copy) id *onIdle; // ivar: _onIdle
@property (copy) id *onResume; // ivar: _onResume


// -(id)initWithIdleHandler:(id)arg0 onResume:(unk)arg1  ;
-(void)invalidate;


@end


#endif