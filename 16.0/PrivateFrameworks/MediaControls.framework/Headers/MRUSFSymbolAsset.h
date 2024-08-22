// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUSFSYMBOLASSET_H
#define MRUSFSYMBOLASSET_H

@class UIImage, NSString;
@protocol MRUUIImageRepresentableAsset;


#import "MRUAsset.h"

@interface MRUSFSymbolAsset : MRUAsset <MRUUIImageRepresentableAsset>



@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName


+(id)systemSymbolNamed:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 ;


@end


#endif