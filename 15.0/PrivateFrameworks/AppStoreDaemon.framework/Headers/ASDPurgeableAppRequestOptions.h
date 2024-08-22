// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPURGEABLEAPPREQUESTOPTIONS_H
#define ASDPURGEABLEAPPREQUESTOPTIONS_H

@class NSString;


#import "ASDRequestOptions.h"

@interface ASDPurgeableAppRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL performAvailablityCheck; // ivar: _performAvailablityCheck
@property (nonatomic) BOOL skipLaunchCheck; // ivar: _skipLaunchCheck
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