// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSORTABLEMESSAGE_H
#define EDSORTABLEMESSAGE_H

@class EMObject, NSDate, NSString, EMObjectID, EMReadLater;
@protocol EDSortableMessage;



@interface EDSortableMessage : EMObject <EDSortableMessage>



@property (readonly) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *displayDate; // ivar: _displayDate
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly) EMReadLater *readLater; // ivar: _readLater
@property (readonly) NSDate *sendLaterDate; // ivar: _sendLaterDate
@property (readonly) Class superclass;


-(id)initWithObjectID:(id)arg0 date:(id)arg1 displayDate:(id)arg2 readLater:(id)arg3 sendLaterDate:(id)arg4 ;


@end


#endif