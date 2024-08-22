// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHENTITYTRANSLATOR_H
#define PGGRAPHENTITYTRANSLATOR_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface PGGraphEntityTranslator : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(BOOL)includesRelationshipChanges;
+(id)entityClassName;
+(id)uuidFromLocalIdentifier:(id)arg0 ;
+(id)uuidsFromLocalIdentifiers:(id)arg0 ;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg0 change:(id)arg1 progressBlock:(id)arg2 ;
-(id)graphChangesForDeletedLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(id)graphChangesForInsertedLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif