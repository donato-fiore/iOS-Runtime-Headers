// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYUSERACTIVITYIDENTIFIERINFO_H
#define SYUSERACTIVITYIDENTIFIERINFO_H

@class NSString, NSURL;
@protocol NSSecureCoding, SYUserActivityInfo;

#import <Foundation/Foundation.h>


@interface SYUserActivityIdentifierInfo : NSObject <NSSecureCoding, SYUserActivityInfo>



@property (readonly, copy) NSString *activityType; // ivar: _activityType
@property (copy) NSURL *canonicalURL; // ivar: _canonicalURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly) Class superclass;
@property (copy) NSString *targetContentIdentifier; // ivar: _targetContentIdentifier
@property (copy) NSURL *webpageURL; // ivar: _webpageURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActivityIdentifierInfo:(id)arg0 ;
-(id)init;
-(id)initWithActivityType:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif