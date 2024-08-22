// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSTORYCONCRETERECIPEASSET_H
#define PFSTORYCONCRETERECIPEASSET_H

@class NSString, NSURL;
@protocol PFStoryRecipeAsset;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteRecipeAsset : NSObject <PFStoryRecipeAsset>



@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqualToAsset:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 kind:(NSInteger)arg1 url:(id)arg2 ;


@end


#endif