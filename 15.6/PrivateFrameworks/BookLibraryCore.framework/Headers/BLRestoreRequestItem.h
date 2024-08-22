// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLRESTOREREQUESTITEM_H
#define BLRESTOREREQUESTITEM_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLRestoreRequestItem : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *assetDictionary; // ivar: _assetDictionary
@property (retain, nonatomic) NSDictionary *downloadDictionary; // ivar: _downloadDictionary


+(BOOL)supportsSecureCoding;
+(id)_assetDictionaryWithDownloadMetadata:(id)arg0 ;
+(id)_downloadDictionaryWithDownloadMetadata:(id)arg0 additionalDownloadPropertiesDictionary:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDownloadDictionary:(id)arg0 assetDictionary:(id)arg1 ;
-(id)initWithDownloadMetadataDictionary:(id)arg0 additionalDownloadPropertiesDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif