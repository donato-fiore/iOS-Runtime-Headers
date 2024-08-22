// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLLAYERPATH_H
#define MLLAYERPATH_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLLayerPath : NSObject <NSCopying>



@property (copy, nonatomic) NSString *layerName; // ivar: _layerName
@property (copy, nonatomic) NSArray *scopedModelNames; // ivar: _scopedModelNames


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMLLayerPath:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithScopedModelAndLayerName:(id)arg0 layerName:(id)arg1 ;
-(void)appendPathComponent:(id)arg0 ;


@end


#endif