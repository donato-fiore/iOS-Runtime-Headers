// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXCODEITEM_H
#define AXCODEITEM_H

@class NSBundle, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AXCodeItem.h"

@interface AXCodeItem : NSObject {
    NSBundle *_cachedBundle;
    ? _flags;
    NSUInteger _loadedAtTimestamp;
}


@property (weak, nonatomic) AXCodeItem *associatedAccessibilityCodeItem; // ivar: _associatedAccessibilityCodeItem
@property (readonly, nonatomic) NSBundle *cachedBundle;
@property (readonly, nonatomic) NSString *debugCodeTypeDescription;
@property (readonly, nonatomic) BOOL isAccessibilityBundle;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic) unsigned short loadOrder; // ivar: _loadOrder
@property (readonly, nonatomic) NSUInteger loadedAtTimestamp;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSMutableDictionary *platformToTarget; // ivar: _platformToTarget
@property (weak, nonatomic) AXCodeItem *targetCodeItem; // ivar: _targetCodeItem
@property (nonatomic) NSInteger targetType; // ivar: _targetType
@property (nonatomic) NSInteger type; // ivar: _type


+(NSInteger)codeItemTypeFromString:(id)arg0 ;
+(id)_codeItemQueue;
-(BOOL)_isSystemAppAccessibilityBundle;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initAccessibilityCodeItemWithPath:(id)arg0 targetType:(NSInteger)arg1 platformToTarget:(id)arg2 loadOrder:(unsigned short)arg3 ;
-(id)initWithPath:(id)arg0 isDyldOpened:(BOOL)arg1 ;
-(id)prepareBackingBundleIfNeeded:(*id)arg0 ;
-(void)_cacheLazyProperties;
-(void)addPlatformToTargetEntries:(id)arg0 ;
-(void)loadWithStrategy:(NSInteger)arg0 onQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif