// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPITEMDECORATION_H
#define FPITEMDECORATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FPItemDecoration : NSObject {
    NSString *_labelFormat;
    NSArray *_labelKeys;
    BOOL _dependsOnParent;
    BOOL _dependsOnStyle;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *decorationIdentifier; // ivar: _decorationIdentifier
@property (readonly, copy, nonatomic) NSString *imageType; // ivar: _imageType
@property (readonly, nonatomic) BOOL requiresFetchingInfoFirst;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(id)_decorationCache;
+(id)_fetchFromCacheWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)_loadDecorationsFromPlist:(id)arg0 bundleIdentifier:(id)arg1 bundle:(struct __CFBundle *)arg2 ;
+(id)decorationWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)infoForItem:(id)arg0 parentInfo:(id)arg1 ;
+(void)_invalidateCache;
+(void)_loadBuiltinDecorationTypes;
+(void)fetchInfoForItem:(id)arg0 completionHandler:(id)arg1 ;
+(void)initialize;
-(id)description;
-(id)initWithPlistEntry:(id)arg0 bundle:(struct __CFBundle *)arg1 bundleIdentifier:(id)arg2 ;
-(id)labelWithInfo:(id)arg0 error:(*id)arg1 ;
-(id)labelWithInfo:(id)arg0 error:(*id)arg1 style:(NSUInteger)arg2 ;
-(id)labelWithItem:(id)arg0 error:(*id)arg1 ;
-(id)labelWithItem:(id)arg0 error:(*id)arg1 style:(NSUInteger)arg2 ;
-(id)labelsWithInfo:(id)arg0 error:(*id)arg1 ;
-(id)labelsWithItem:(id)arg0 error:(*id)arg1 ;
-(id)parentDependingKeys;
-(id)styleDependingKeys;
-(void)folderStatusForItem:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif