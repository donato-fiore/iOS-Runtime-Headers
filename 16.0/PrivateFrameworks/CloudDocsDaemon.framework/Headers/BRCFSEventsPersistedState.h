// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCFSEVENTSPERSISTEDSTATE_H
#define BRCFSEVENTSPERSISTEDSTATE_H

@class NSUUID;
@protocol NSCopying;


#import "BRCPersistedState.h"

@interface BRCFSEventsPersistedState : BRCPersistedState <NSCopying>



@property (nonatomic) NSUInteger latestEventID; // ivar: _latestEventID
@property (nonatomic) NSUInteger rootID; // ivar: _rootID
@property (retain, nonatomic) NSUUID *streamUUID; // ivar: _streamUUID


+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg0 options:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatestEventID:(NSUInteger)arg0 streamUUID:(id)arg1 rootID:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif