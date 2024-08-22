// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTORYCONCRETERECIPEDISPLAYASSET_H
#define PFSTORYCONCRETERECIPEDISPLAYASSET_H

@class NSString, NSURL;
@protocol PFStoryRecipeDisplayAsset;


#import "PFStoryConcreteRecipeAsset.h"

@interface PFStoryConcreteRecipeDisplayAsset : PFStoryConcreteRecipeAsset <PFStoryRecipeDisplayAsset>



@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) NSString *cloudIdentifier; // ivar: _cloudIdentifier
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSInteger kind;
@property (readonly, nonatomic) NSString *scheme; // ivar: _scheme
@property (readonly, nonatomic) NSURL *url;


+(BOOL)decomposeURL:(id)arg0 usingBlock:(id)arg1 ;
+(id)URLWithScheme:(id)arg0 cloudIdentifier:(id)arg1 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 category:(NSInteger)arg1 scheme:(id)arg2 cloudIdentifier:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 kind:(NSInteger)arg1 url:(id)arg2 ;


@end


#endif