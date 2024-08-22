// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUASSET_H
#define MRUASSET_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>

#import "MRUCAPackageAsset.h"

@interface MRUAsset : NSObject

@property (retain, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) MRUCAPackageAsset *packageAsset; // ivar: _packageAsset
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName


+(id)image:(id)arg0 ;
+(id)packageAsset:(id)arg0 ;
+(id)packageAsset:(id)arg0 symbolName:(id)arg1 image:(id)arg2 ;
+(id)symbolNamed:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithImage:(id)arg0 ;
-(id)initWithPackageAsset:(id)arg0 ;
-(id)initWithPackageAsset:(id)arg0 symbolName:(id)arg1 image:(id)arg2 ;
-(id)initWithSymbolName:(id)arg0 ;


@end


#endif