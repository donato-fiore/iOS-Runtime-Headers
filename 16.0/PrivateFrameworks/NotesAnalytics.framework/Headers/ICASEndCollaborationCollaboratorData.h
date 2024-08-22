// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASENDCOLLABORATIONCOLLABORATORDATA_H
#define ICASENDCOLLABORATIONCOLLABORATORDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASEndCollaborationCollaboratorData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *endAcceptedCount; // ivar: _endAcceptedCount
@property (readonly, nonatomic) NSNumber *endInvitedCount; // ivar: _endInvitedCount


+(id)dataName;
-(id)initWithEndInvitedCount:(id)arg0 endAcceptedCount:(id)arg1 ;
-(id)toDict;


@end


#endif