// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSTARTCOLLABORATIONCOLLABORATORDATA_H
#define ICASSTARTCOLLABORATIONCOLLABORATORDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASStartCollaborationCollaboratorData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *startAcceptedCount; // ivar: _startAcceptedCount
@property (readonly, nonatomic) NSNumber *startInvitedCount; // ivar: _startInvitedCount


+(id)dataName;
-(id)initWithStartInvitedCount:(id)arg0 startAcceptedCount:(id)arg1 ;
-(id)toDict;


@end


#endif