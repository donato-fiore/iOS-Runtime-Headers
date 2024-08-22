// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSSKEYBOARDCOMMANDINFO_H
#define AXSSKEYBOARDCOMMANDINFO_H


#import <Foundation/Foundation.h>


@interface AXSSKeyboardCommandInfo : NSObject

@property (readonly, nonatomic) id *downHandler; // ivar: _downHandler
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) BOOL handlesBothDownAndUp; // ivar: _handlesBothDownAndUp
@property (readonly, nonatomic) id *upHandler; // ivar: _upHandler


// +(id)infoWithDownHandler:(id)arg0 upHandler:(unk)arg1  ;
+(id)infoWithHandler:(id)arg0 ;
// -(id)_initWithHandler:(id)arg0 downHandler:(unk)arg1 upHandler:(id)arg2 handlesBothDownAndUp:(unk)arg3  ;


@end


#endif