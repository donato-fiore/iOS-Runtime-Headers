// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASOOVERLAYAPPCONFIGURATION_H
#define ASOOVERLAYAPPCONFIGURATION_H

@class NSString, NSMutableDictionary;
@protocol NSSecureCoding, ASOOverlayConfiguration;

#import <Foundation/Foundation.h>


@interface ASOOverlayAppConfiguration : NSObject <NSSecureCoding, ASOOverlayConfiguration>



@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *campaignToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (nonatomic) NSInteger position;
@property (copy, nonatomic) NSString *productVariantID;
@property (retain, nonatomic) NSString *providerToken;
@property (readonly, retain, nonatomic) NSMutableDictionary *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (nonatomic) BOOL userDismissable;
@property (nonatomic) BOOL userDismissible;


+(BOOL)supportsSecureCoding;
-(id)additionalValueForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppIdentifier:(id)arg0 position:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAdditionalValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif