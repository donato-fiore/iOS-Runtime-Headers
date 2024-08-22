// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASACTION_H
#define ASACTION_H

@class DAAction;



@interface ASAction : DAAction

@property (nonatomic) BOOL isSkippedDetachment; // ivar: _isSkippedDetachment


-(BOOL)isOrganizerUpdate;
-(id)contact;
-(id)deletedContactID;
-(id)deletedEventID;
-(id)deletedToDoID;
-(id)event;
-(id)toDo;


@end


#endif