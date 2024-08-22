// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSASSET_H
#define DDSASSET_H

@class NSString, NSDictionary, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DDSAsset : NSObject <NSCopying>

 {
    NSString *_description;
}


@property (readonly, nonatomic) NSUInteger assetState; // ivar: _assetState
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSUInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSUInteger contentVersion; // ivar: _contentVersion
@property (readonly, nonatomic) NSString *dataType; // ivar: _dataType
@property (readonly, nonatomic) NSString *debuggingID; // ivar: _debuggingID
@property (readonly, nonatomic) NSString *installDate; // ivar: _installDate
@property (readonly, nonatomic) NSURL *localURL; // ivar: _localURL
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *shortName; // ivar: _shortName
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)debuggingIDsForAssets:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttributes:(id)arg0 localURL:(id)arg1 ;


@end


#endif