// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDCLIPCARDMETRICSEVENT_H
#define ASDCLIPCARDMETRICSEVENT_H

@class NSString, NSNumber, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDClipCardMetricsEvent : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (retain, nonatomic) NSString *referralSource; // ivar: _referralSource
@property (retain, nonatomic) NSString *referralSourceBundleID; // ivar: _referralSourceBundleID
@property (retain, nonatomic) NSString *referrerType; // ivar: _referrerType
@property (retain, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (nonatomic) BOOL thirdPartyWithNoAppReferrer; // ivar: _thirdPartyWithNoAppReferrer


+(BOOL)supportsSecureCoding;
-(id)initWithClipBundleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif