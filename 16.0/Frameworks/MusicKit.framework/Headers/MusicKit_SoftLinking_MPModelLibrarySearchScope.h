// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYSEARCHSCOPE_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYSEARCHSCOPE_H

@class MPModelLibrarySearchScope;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject {
    MPModelLibrarySearchScope *_underlyingSearchScope;
}


@property (readonly, nonatomic) NSInteger modelObjectType; // ivar: _modelObjectType


+(id)_topResultsRelationshipKeyForSpecificModelObjectType:(NSInteger)arg0 ;
+(id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)arg0 ;
-(id)_initWithUnderlyingSearchScope:(id)arg0 modelObjectType:(NSInteger)arg1 ;
-(id)_underlyingSearchScope;
-(id)initWithModelObjectType:(NSInteger)arg0 ;


@end


#endif