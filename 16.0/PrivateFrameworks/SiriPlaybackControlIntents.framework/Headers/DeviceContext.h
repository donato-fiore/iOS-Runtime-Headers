// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEVICECONTEXT_H
#define DEVICECONTEXT_H

@class INObject, NSString, NSDate, NSNumber;



@interface DeviceContext : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *groupId;
@property (nonatomic) NSInteger nowPlayingMediaType;
@property (nonatomic) NSInteger nowPlayingState;
@property (nonatomic, copy) NSDate *nowPlayingTimestamp;
@property (nonatomic) NSInteger proximity;
@property (nonatomic, copy) NSString *routeId;
@property (nonatomic, retain) NSNumber *silentPrimary;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif