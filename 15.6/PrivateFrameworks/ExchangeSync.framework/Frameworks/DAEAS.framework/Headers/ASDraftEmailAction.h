// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDRAFTEMAILACTION_H
#define ASDRAFTEMAILACTION_H

@class DAAction;



@interface ASDraftEmailAction : DAAction

@property (nonatomic) BOOL send; // ivar: _send


-(id)initWithItemChangeType:(NSUInteger)arg0 changedItem:(id)arg1 send:(BOOL)arg2 ;
-(void)appendApplicationDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;


@end


#endif