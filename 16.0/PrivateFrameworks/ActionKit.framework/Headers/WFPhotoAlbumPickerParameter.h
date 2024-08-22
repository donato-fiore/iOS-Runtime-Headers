// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPHOTOALBUMPICKERPARAMETER_H
#define WFPHOTOALBUMPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, NSString;
@protocol PHPhotoLibraryChangeObserver;


#import "WFPhotoAccessResource.h"

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver>

 {
    NSArray *_possibleStates;
    id *_defaultSerializedRepresentation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesSmartAlbum; // ivar: _includesSmartAlbum
@property (retain, nonatomic) WFPhotoAccessResource *photoAccessResource; // ivar: _photoAccessResource
@property (readonly) Class superclass;


+(BOOL)hasPhotosAccess;
+(id)referencedActionResourceClasses;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(id)sharedLibrary;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)possibleStatesDidChange;
-(void)resourceAvailabilityChanged;
-(void)setActionResources:(id)arg0 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif