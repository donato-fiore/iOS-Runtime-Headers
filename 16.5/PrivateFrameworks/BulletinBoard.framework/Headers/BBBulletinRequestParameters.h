// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBBULLETINREQUESTPARAMETERS_H
#define BBBULLETINREQUESTPARAMETERS_H

@class NSSet, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _maximumCount;
}


@property (retain, nonatomic) NSSet *enabledSectionIDs; // ivar: _enabledSectionIDs
@property (readonly, nonatomic) NSUInteger maximumCount;
@property (readonly, nonatomic) NSUInteger publisherDestination; // ivar: _publisherDestination
@property (retain, nonatomic) NSDate *sinceDate; // ivar: _sinceDate


+(BOOL)supportsSecureCoding;
+(id)requestParametersForDestination:(NSUInteger)arg0 withSinceDate:(id)arg1 maximumCount:(NSInteger)arg2 enabledSectionIDs:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(NSUInteger)arg0 sinceDate:(id)arg1 maximumCount:(NSInteger)arg2 enabledSectionIDs:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif