// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBELASTICROUTEDISPLAYCONTEXT_H
#define SBELASTICROUTEDISPLAYCONTEXT_H

@class NSString, UIImage, CCUICAPackageDescription;
@protocol SBElasticRouteDisplaying;

#import <Foundation/Foundation.h>


@interface SBElasticRouteDisplayContext : NSObject <SBElasticRouteDisplaying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackage; // ivar: _glyphPackage
@property (copy, nonatomic) id *glyphStateValueTransformer; // ivar: _glyphStateValueTransformer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly) Class superclass;


+(id)routeContextWithName:(id)arg0 glyphImage:(id)arg1 ;
// +(id)routeContextWithName:(id)arg0 valueTransformer:(id)arg1 glyphPackage:(unk)arg2  ;
// -(id)_initWithName:(id)arg0 glyphStateValueTransformer:(id)arg1 glyphPackage:(unk)arg2 glyphImage:(id)arg3  ;


@end


#endif