// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVGRATISAPPLICATION_H
#define SSVGRATISAPPLICATION_H

@class NSString, NSDictionary, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVGratisApplication : NSObject <NSCopying>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif