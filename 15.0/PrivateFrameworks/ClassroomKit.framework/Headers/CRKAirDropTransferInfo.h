// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKAIRDROPTRANSFERINFO_H
#define CRKAIRDROPTRANSFERINFO_H

@class NSString, NSDictionary, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface CRKAirDropTransferInfo : NSObject

@property (nonatomic) BOOL autoAccept; // ivar: _autoAccept
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *files; // ivar: _files
@property (nonatomic) BOOL hideProgress; // ivar: _hideProgress
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *itemsDescription; // ivar: _itemsDescription
@property (copy, nonatomic) NSData *previewImageData; // ivar: _previewImageData
@property (copy, nonatomic) NSString *senderName; // ivar: _senderName
@property (copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier


-(id)description;
-(void)addFiles:(id)arg0 ;
-(void)addItems:(id)arg0 ;


@end


#endif