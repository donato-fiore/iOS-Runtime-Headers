// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONLAYOUTAUXILLARYKEY_H
#define _UICOLLECTIONLAYOUTAUXILLARYKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying>

 {
    BOOL _isSupplementary;
    NSString *_elementKind;
    NSInteger _index;
    NSInteger _auxillaryKind;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif