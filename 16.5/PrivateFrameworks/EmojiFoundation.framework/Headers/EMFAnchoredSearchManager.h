// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFANCHOREDSEARCHMANAGER_H
#define EMFANCHOREDSEARCHMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "EMFAnchoredSearchAnchorsLoader.h"
#import "EMFEmojiLocaleData.h"

@interface EMFAnchoredSearchManager : NSObject

@property (readonly, nonatomic) EMFAnchoredSearchAnchorsLoader *anchorsLoader; // ivar: _anchorsLoader
@property (readonly, nonatomic) NSUInteger contextPosition; // ivar: _contextPosition
@property (nonatomic) EMFEmojiLocaleData *localeData; // ivar: _localeData
@property (readonly, nonatomic) NSArray *localizedLeftHandAnchors;
@property (readonly, nonatomic) NSArray *localizedRightHandAnchors;


-(id)initWithLocaleData:(id)arg0 ;
-(void)_enumerateAnchoredReplacementCandidatesForContextLeft:(id)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateAnchoredReplacementCandidatesForContextOmnidirectional:(id)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateAnchoredReplacementCandidatesForContextRight:(id)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateAnchoredReplacementCandidatesForContext:(id)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif