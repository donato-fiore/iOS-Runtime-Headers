// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTEACCESSDATA_H
#define ICASNOTEACCESSDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollaborationStatus.h"
#import "ICASCollaborationType.h"

@interface ICASNoteAccessData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus; // ivar: _collaborationStatus
@property (readonly, nonatomic) ICASCollaborationType *collaborationType; // ivar: _collaborationType
@property (readonly, nonatomic) NSNumber *isPasswordProtected; // ivar: _isPasswordProtected
@property (readonly, nonatomic) NSNumber *isPinned; // ivar: _isPinned


+(id)dataName;
-(id)initWithIsPasswordProtected:(id)arg0 isPinned:(id)arg1 collaborationStatus:(id)arg2 collaborationType:(id)arg3 ;
-(id)toDict;


@end


#endif