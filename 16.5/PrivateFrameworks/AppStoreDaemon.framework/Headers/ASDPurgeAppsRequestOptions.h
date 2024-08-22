// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPURGEAPPSREQUESTOPTIONS_H
#define ASDPURGEAPPSREQUESTOPTIONS_H

@class NSArray, NSNumber, NSString;


#import "ASDRequestOptions.h"

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSArray *apps; // ivar: _apps
@property (copy, nonatomic) NSNumber *desiredPurgeAmount; // ivar: _desiredPurgeAmount
@property (nonatomic) BOOL offloadOnly; // ivar: _offloadOnly
@property (nonatomic) BOOL performAvailablityCheck; // ivar: _performAvailablityCheck
@property (nonatomic) NSInteger urgency; // ivar: _urgency
@property (copy, nonatomic) NSString *volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVolume:(id)arg0 urgency:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif