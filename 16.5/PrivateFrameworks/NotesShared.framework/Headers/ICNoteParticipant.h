// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEPARTICIPANT_H
#define ICNOTEPARTICIPANT_H

@class NSManagedObject, NSString;


#import "ICNote.h"

@interface ICNoteParticipant : NSManagedObject

@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSString *userID;




@end


#endif