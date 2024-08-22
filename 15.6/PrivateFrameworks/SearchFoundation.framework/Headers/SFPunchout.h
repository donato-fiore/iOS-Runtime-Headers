// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPUNCHOUT_H
#define SFPUNCHOUT_H

@class NSString, NSURL, NSDictionary, NSData, NSArray;
@protocol SFPunchout, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFUserActivityData.h"

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *actionTarget; // ivar: _actionTarget
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSURL *cachedOpenableURL; // ivar: _cachedOpenableURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasClip; // ivar: _hasClip
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunnableInBackground; // ivar: _isRunnableInBackground
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSURL *preferredOpenableURL;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urls; // ivar: _urls
@property (retain, nonatomic) SFUserActivityData *userActivityData; // ivar: _userActivityData


+(BOOL)supportsSecureCoding;
+(id)punchoutWithURL:(id)arg0 ;
+(id)punchoutWithURLs:(id)arg0 ;
-(BOOL)canOpenURL:(id)arg0 ;
-(BOOL)hasHasClip;
-(BOOL)hasIsRunnableInBackground;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif