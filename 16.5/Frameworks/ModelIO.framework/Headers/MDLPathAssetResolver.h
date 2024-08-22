// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLPATHASSETRESOLVER_H
#define MDLPATHASSETRESOLVER_H

@class NSString;
@protocol MDLAssetResolver;

#import <Foundation/Foundation.h>


@interface MDLPathAssetResolver : NSObject <MDLAssetResolver>

 {
    NSString *_path;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *path;
@property (readonly) Class superclass;


-(BOOL)canResolveAssetNamed:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)resolveAssetNamed:(id)arg0 ;


@end


#endif