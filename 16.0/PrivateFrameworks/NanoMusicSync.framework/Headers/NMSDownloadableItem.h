// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSDOWNLOADABLEITEM_H
#define NMSDOWNLOADABLEITEM_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface NMSDownloadableItem : NSObject

@property (readonly, nonatomic) NSString *externalLibraryIdentifier; // ivar: _externalLibraryIdentifier
@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSUInteger itemType; // ivar: _itemType
@property (readonly, nonatomic, getter=isManuallyAdded) BOOL manuallyAdded; // ivar: _manuallyAdded
@property (readonly, nonatomic) NSNumber *mediaLibraryIdentifier; // ivar: _mediaLibraryIdentifier
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMediaLibraryIdentifier:(id)arg0 externalLibraryIdentifier:(id)arg1 size:(NSUInteger)arg2 itemType:(NSUInteger)arg3 manuallyAdded:(BOOL)arg4 ;


@end


#endif