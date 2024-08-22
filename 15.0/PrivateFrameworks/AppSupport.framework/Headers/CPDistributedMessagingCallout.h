// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPDISTRIBUTEDMESSAGINGCALLOUT_H
#define CPDISTRIBUTEDMESSAGINGCALLOUT_H


#import <Foundation/Foundation.h>


@interface CPDistributedMessagingCallout : NSObject {
    BOOL _returnsVoidIsValid;
}


@property (readonly, nonatomic) BOOL returnsVoid; // ivar: _returnsVoid
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, retain, nonatomic) id *target; // ivar: _target


-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;


@end


#endif