// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPLAYBACKAUTHORIZATIONTOKENTRUSTPROVIDER_H
#define MPPLAYBACKAUTHORIZATIONTOKENTRUSTPROVIDER_H

@class NSString;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MPPlaybackAuthorizationTokenTrustProvider : NSObject <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger requestSource; // ivar: _requestSource
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *trustID; // ivar: _trustID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestSource:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif