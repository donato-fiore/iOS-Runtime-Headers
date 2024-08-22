// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMVISIONFACENAMEHELPER_H
#define AXMVISIONFACENAMEHELPER_H

@class NSMutableDictionary, VNPersonsModel, NSDate;

#import <Foundation/Foundation.h>


@interface AXMVisionFaceNameHelper : NSObject

@property (nonatomic) CGFloat _lastFileModificationCheckTime; // ivar: __lastFileModificationCheckTime
@property (retain, nonatomic) NSMutableDictionary *_personLocalIdentifierToName; // ivar: __personLocalIdentifierToName
@property (retain, nonatomic) VNPersonsModel *_personsModel; // ivar: __personsModel
@property (nonatomic) NSDate *_personsModelFileModifiedDate; // ivar: __personsModelFileModifiedDate


-(BOOL)_checkPhotoLibraryAuthorization;
-(BOOL)_isDeviceUnlocked;
-(BOOL)_loadPersonsModel;
-(BOOL)_shouldReloadPersonsModel;
-(BOOL)prepareForLookup;
-(NSUInteger)faceprintRequestRevisionForPersonsModel;
-(id)_fetchPersonsForLocalIdentifiers:(id)arg0 ;
-(id)_fileModificationDateForPath:(id)arg0 ;
-(id)_filePathForPersonsModel;
-(id)_photoAuthorizationMessage:(NSInteger)arg0 ;
-(id)nameForFaceObservation:(id)arg0 ;
-(void)_resetState;


@end


#endif