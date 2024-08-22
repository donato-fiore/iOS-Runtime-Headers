// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSYNCINFO_H
#define AFSYNCINFO_H

@class NSString, SASyncAppMetaData, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSyncInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *anchor; // ivar: _anchor
@property (copy, nonatomic) SASyncAppMetaData *appMetadata; // ivar: _appMetadata
@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) BOOL forVerification; // ivar: _forVerification
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSSet *reasons; // ivar: _reasons
@property (nonatomic) BOOL targetIsLocal; // ivar: _targetIsLocal
@property (copy, nonatomic) NSString *validity; // ivar: _validity


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAnchor:(id)arg0 forcingReset:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif