// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSNAPSHOTCACHEKEY_H
#define CKSNAPSHOTCACHEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKSnapshotCacheKey : NSObject <NSCopying>



@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger interfaceStyle; // ivar: _interfaceStyle
@property (readonly, nonatomic) NSString *stringValue;


+(id)keyWithIdentifier:(id)arg0 interfaceStyle:(NSInteger)arg1 bounds:(struct CGRect )arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 interfaceStyle:(NSInteger)arg1 bounds:(struct CGRect )arg2 ;
-(id)keyWithOppositeInterfaceStyle;


@end


#endif