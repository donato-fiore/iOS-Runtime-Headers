// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTORELIBRARYPERSONALIZATIONCONTENTDESCRIPTOR_H
#define MPSTORELIBRARYPERSONALIZATIONCONTENTDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "MPModelObject.h"

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject

@property (readonly, nonatomic) MPModelObject *model; // ivar: _model
@property (readonly, nonatomic) NSInteger personalizationStyle; // ivar: _personalizationStyle


+(id)_lightweightPersonalizationPropertiesForLyrics;
+(id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+(id)_lightweightPersonalizationPropertiesForStoreAsset;
+(id)lightweightPersonalizationPropertiesForModelClass:(Class)arg0 ;
-(id)description;
-(id)initWithModel:(id)arg0 personalizationStyle:(NSInteger)arg1 ;


@end


#endif