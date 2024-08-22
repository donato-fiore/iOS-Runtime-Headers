// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONCONTENTDESCRIPTOR_H
#define MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONCONTENTDESCRIPTOR_H

@class MPStoreLibraryPersonalizationContentDescriptor, NSString;
@protocol MusicKit_SoftLinking_MPSectionedCollectionObject;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationContentDescriptor : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject>

 {
    MPStoreLibraryPersonalizationContentDescriptor *_underlyingContentDescriptor;
}


@property (readonly, nonatomic) MPStoreLibraryPersonalizationContentDescriptor *_underlyingContentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *underlyingObject;


-(id)initWithModel:(id)arg0 personalizationStyle:(NSInteger)arg1 ;


@end


#endif