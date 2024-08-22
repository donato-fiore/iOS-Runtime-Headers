// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOSTREAMALBUM_H
#define PLPHOTOSTREAMALBUM_H

@class NSString;


#import "PLManagedAlbum.h"

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (retain, nonatomic) NSString *personID;


+(id)entityName;
+(id)keyPathsForValuesAffectingPersonID;
+(id)photoStreamAlbumWithStreamID:(id)arg0 inPhotoLibrary:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(BOOL)shouldDeleteWhenEmpty;
-(void)addAssetOrderedByDataTaken:(id)arg0 ;
-(void)awakeFromInsert;
-(void)enforceImageLimitIfNecessary;


@end


#endif