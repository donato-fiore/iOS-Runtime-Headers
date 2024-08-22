// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYPHOTOKITIMAGEPROVIDER_H
#define PXSHAREDLIBRARYPHOTOKITIMAGEPROVIDER_H

@class PHPerson, PHShareParticipant, NSString;
@protocol PXSharedLibraryImageProvider;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryPhotoKitImageProvider : NSObject <PXSharedLibraryImageProvider>

 {
    NSInteger _identifier;
    PHPerson *_person;
    PHShareParticipant *_participant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)requestImageWithTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 isRTL:(BOOL)arg2 completionHandler:(id)arg3 ;
-(id)init;
-(id)initWithParticipant:(id)arg0 ;
-(id)initWithPerson:(id)arg0 ;
-(void)_handleResultForRequestWithIdentifier:(NSInteger)arg0 image:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)cancelRequestWithIdentifier:(NSInteger)arg0 ;


@end


#endif