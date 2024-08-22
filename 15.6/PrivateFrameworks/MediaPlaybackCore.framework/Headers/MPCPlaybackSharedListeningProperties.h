// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYBACKSHAREDLISTENINGPROPERTIES_H
#define MPCPLAYBACKSHAREDLISTENINGPROPERTIES_H

@class ICLiveLink, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCPlaybackSharedListeningProperties : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) ICLiveLink *liveLink; // ivar: _liveLink
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSString *sessionKey; // ivar: _sessionKey


+(BOOL)supportsSecureCoding;
+(id)propertiesWithSessionIdentifier:(id)arg0 sessionKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif