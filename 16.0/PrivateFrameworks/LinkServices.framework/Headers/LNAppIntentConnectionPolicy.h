// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNAPPINTENTCONNECTIONPOLICY_H
#define LNAPPINTENTCONNECTIONPOLICY_H

@class LNActionMetadata, NSString, LNEffectiveBundleIdentifier;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LNAppIntentConnectionPolicy : NSObject <NSCopying>

 {
    LNActionMetadata *_metadata;
}


@property (readonly, nonatomic) NSString *appIntentIdentifier;
@property (readonly, nonatomic) NSString *appIntentMangledTypeName;
@property (readonly, nonatomic) NSInteger bundleMetadataVersion;
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier; // ivar: _effectiveBundleIdentifier
@property (readonly, nonatomic) BOOL openAppWhenRun;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionWithParameters:(id)arg0 ;
-(id)connectionWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEffectiveBundleIdentifier:(id)arg0 metadata:(id)arg1 ;


@end


#endif