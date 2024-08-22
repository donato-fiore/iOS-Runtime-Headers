// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPLOCATIONFETCHCONTEXT_H
#define SPLOCATIONFETCHCONTEXT_H

@class NSString, NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SPLocationFetchContext : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *cachePolicy; // ivar: _cachePolicy
@property (copy, nonatomic) NSDictionary *lastOnlineLocationInfo; // ivar: _lastOnlineLocationInfo
@property (copy, nonatomic) NSArray *searchIdentifiers; // ivar: _searchIdentifiers
@property (copy, nonatomic) NSArray *searchLocationSources; // ivar: _searchLocationSources
@property (copy, nonatomic) NSArray *searchPriority; // ivar: _searchPriority
@property (copy, nonatomic) NSArray *searchTypes; // ivar: _searchTypes
@property (nonatomic) BOOL subscribe; // ivar: _subscribe


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif