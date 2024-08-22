// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGLONGTAILSUGGESTIONCANDIDATE_H
#define PGLONGTAILSUGGESTIONCANDIDATE_H

@class PHAsset;

#import <Foundation/Foundation.h>


@interface PGLongTailSuggestionCandidate : NSObject

@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSUInteger score; // ivar: _score


-(BOOL)isValidBeforeKeyItemFilterWithMeNodeLocalIdentifier:(id)arg0 ;
-(BOOL)isValidWithMeNodeLocalIdentifier:(id)arg0 ;
-(id)initWithAsset:(id)arg0 score:(NSUInteger)arg1 ;


@end


#endif