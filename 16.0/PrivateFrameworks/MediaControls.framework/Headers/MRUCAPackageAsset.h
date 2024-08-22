// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUCAPACKAGEASSET_H
#define MRUCAPACKAGEASSET_H

@class NSString, CAPackage;


#import "MRUAsset.h"

@interface MRUCAPackageAsset : MRUAsset

@property (retain, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly, nonatomic) CAPackage *package; // ivar: _package
@property (readonly, nonatomic) NSString *packageName; // ivar: _packageName
@property (nonatomic) CATransform3D permanentTransform; // ivar: _permanentTransform


+(id)packageNamed:(id)arg0 glyphState:(id)arg1 ;
+(id)packageNamed:(id)arg0 glyphState:(id)arg1 permanentTransform:(struct CATransform3D )arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPackageName:(id)arg0 glyphState:(id)arg1 ;
-(id)initWithPackageName:(id)arg0 glyphState:(id)arg1 permanentTransform:(struct CATransform3D )arg2 ;


@end


#endif