// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSWIFICONFIGURATIONDATA_H
#define BCSWIFICONFIGURATIONDATA_H

@class NSString;
@protocol BCSParsedDataPrivate;

#import <Foundation/Foundation.h>


@interface BCSWiFiConfigurationData : NSObject <BCSParsedDataPrivate>



@property (readonly, nonatomic, getter=isWEP) BOOL WEP; // ivar: _WEP
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, copy, nonatomic) NSString *ssid; // ivar: _ssid
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSSID:(id)arg0 isWEP:(BOOL)arg1 password:(id)arg2 isHidden:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif