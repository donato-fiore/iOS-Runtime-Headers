// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPAPPLICATION_H
#define SPAPPLICATION_H

@class NSString, NSURL, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPApplication : NSObject <NSSecureCoding>

 {
    NSString *_longDisplayName;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) NSString *displayIdentifier; // ivar: _displayIdentifier
@property (retain, nonatomic) NSString *displayName;
@property (retain) NSString *displayNameInternal; // ivar: _displayNameInternal
@property (readonly, nonatomic) BOOL displayNameLoaded;
@property (readonly) BOOL isAppClip;
@property (readonly) BOOL isWebClip;
@property (retain, nonatomic) NSMutableArray *keywords; // ivar: _keywords
@property (retain, nonatomic) NSString *longDisplayName;
@property (retain, nonatomic) NSString *shortVersion; // ivar: _shortVersion
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) NSString *utiType;
@property (nonatomic) NSInteger webClipType; // ivar: _webClipType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif