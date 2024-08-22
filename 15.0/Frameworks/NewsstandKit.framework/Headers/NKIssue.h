// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NKISSUE_H
#define NKISSUE_H

@class NSMutableArray, NSMapTable, NSMutableSet, NSURL, NSDate, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NKLibrary.h"

@interface NKIssue : NSObject <NSSecureCoding>

 {
    NKLibrary *_library;
    NSMutableArray *_assets;
    NSMapTable *_assetsByRequest;
    NSMutableSet *_resolvedAssets;
    BOOL _foundContent;
    BOOL _isDecodingValid;
}


@property (nonatomic, setter=_setLibrary:) NKLibrary *_library;
@property (readonly, copy) NSURL *contentURL;
@property (copy) NSDate *date; // ivar: _date
@property (copy) NSString *directory; // ivar: _directory
@property (readonly, copy) NSArray *downloadingAssets;
@property (copy) NSString *name; // ivar: _name
@property (readonly) NSInteger status;


+(BOOL)supportsSecureCoding;
-(BOOL)_isDecodingValid;
-(id)_assetsForRequest:(id)arg0 ;
-(id)_commonInit;
-(id)_initWithName:(id)arg0 date:(id)arg1 directory:(id)arg2 ;
-(id)addAssetWithRequest:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_assetChanged:(id)arg0 ;
-(void)_cleanupAsset:(id)arg0 ;
-(void)_markAssetAsResolved:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif