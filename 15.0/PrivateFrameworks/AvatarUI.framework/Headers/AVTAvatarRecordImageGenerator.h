// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARRECORDIMAGEGENERATOR_H
#define AVTAVATARRECORDIMAGEGENERATOR_H

@class NSArray;
@protocol AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTCoreModel.h"
#import "AVTUIEnvironment.h"
#import "AVTImageStore.h"
#import "AVTAvatarConfigurationImageRenderer.h"

@interface AVTAvatarRecordImageGenerator : NSObject

@property (readonly, nonatomic) AVTCoreModel *coreModel;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) AVTImageStore *imageStore; // ivar: _imageStore
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer; // ivar: _renderer
@property (readonly, copy, nonatomic) NSArray *scopes; // ivar: _scopes


+(id)supportedScopesForScale:(CGFloat)arg0 ;
-(BOOL)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)generateThumbnailForAvatarRecordItem:(id)arg0 avatarConfiguration:(id)arg1 scope:(id)arg2 error:(*id)arg3 ;
-(BOOL)generateThumbnailsForAvatarRecord:(id)arg0 avatar:(id)arg1 error:(*id)arg2 ;
-(BOOL)generateThumbnailsForAvatarRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)generateThumbnailsForDuplicateAvatarRecord:(id)arg0 originalRecord:(id)arg1 error:(*id)arg2 ;
-(id)initWithImageStore:(id)arg0 coreEnvironment:(id)arg1 ;
-(id)initWithImageStore:(id)arg0 renderer:(id)arg1 environment:(id)arg2 ;
-(void)updateThumbnailsForChangesWithTracker:(id)arg0 recordProvider:(id)arg1 ;


@end


#endif