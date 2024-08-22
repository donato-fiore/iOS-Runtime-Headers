// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIAWAREPUBLISHDATAPATHSECURITYCONFIGURATION_H
#define WIFIAWAREPUBLISHDATAPATHSECURITYCONFIGURATION_H

@class NSArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *passphraseList; // ivar: _passphraseList
@property (readonly, nonatomic) NSData *pmkID; // ivar: _pmkID
@property (readonly, nonatomic) NSArray *pmkList; // ivar: _pmkList


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPMK:(id)arg0 andPMKID:(id)arg1 ;
-(id)initWithPMKList:(id)arg0 passphraseList:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif