// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VEKSUGGESTION_H
#define VEKSUGGESTION_H

@class PHAsset;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VEKSuggestion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (nonatomic) CGFloat reorderTimeOffset; // ivar: _reorderTimeOffset
@property (nonatomic) NSInteger specialTreatment; // ivar: _specialTreatment
@property (nonatomic) NSInteger usage; // ivar: _usage
@property (nonatomic) NSInteger volume; // ivar: _volume


-(id)description;
-(id)initWithAsset:(id)arg0 ;


@end


#endif