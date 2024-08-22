// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NNLAYERINFO_H
#define _NNLAYERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _NNLayerInfo : NSObject

@property (readonly, nonatomic) BOOL bidirectional; // ivar: _bidirectional
@property (readonly, copy, nonatomic) NSString *concatenatedInputNames; // ivar: _concatenatedInputNames
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)initWithType:(id)arg0 concatenatedInputNames:(id)arg1 bidirectional:(BOOL)arg2 ;


@end


#endif