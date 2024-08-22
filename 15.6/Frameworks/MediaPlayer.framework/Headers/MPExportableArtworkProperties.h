// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPEXPORTABLEARTWORKPROPERTIES_H
#define MPEXPORTABLEARTWORKPROPERTIES_H

@class ICStoreArtworkInfo, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MPExportableArtworkProperties : NSObject

@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (copy, nonatomic) NSArray *artworkTemplateItems; // ivar: _artworkTemplateItems
@property (nonatomic) NSInteger mediaLibraryArtworkType; // ivar: _mediaLibraryArtworkType
@property (nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSString *resolvedURLString; // ivar: _resolvedURLString
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif