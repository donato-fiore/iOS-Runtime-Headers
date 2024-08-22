// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIALIBRARY_H
#define VUIMEDIALIBRARY_H

@class NSString;
@protocol VUIMediaLibraryIdentifier;


#import "VUIMediaLibraryImageLoader.h"
#import "VUIMediaLibraryManager.h"

@interface VUIMediaLibrary : VUIMediaLibraryImageLoader

@property (readonly, nonatomic, getter=isConnectable) BOOL connectable;
@property (readonly, nonatomic) NSUInteger connectionState;
@property (copy, nonatomic) NSObject<VUIMediaLibraryIdentifier> *identifier; // ivar: _identifier
@property (readonly, weak, nonatomic) VUIMediaLibraryManager *manager; // ivar: _manager
@property (nonatomic) NSUInteger revision; // ivar: _revision
@property (readonly, nonatomic) BOOL supportsDRMContent;
@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_incrementRevision;
-(NSUInteger)hash;
-(id)_imageLoadOperationWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg0 ;
-(id)_imageLoaderIdentifier;
-(id)description;
-(id)enqueueFetchRequests:(id)arg0 completionHandler:(id)arg1 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 manager:(id)arg2 ;
-(id)saveMediaEntity:(id)arg0 completionHandler:(id)arg1 ;
-(void)_postContentsDidChangeNotification;
-(void)_updateWithTitle:(id)arg0 connectionState:(NSUInteger)arg1 ;
// -(void)connectWithCompletionHandler:(id)arg0 progressHandler:(unk)arg1  ;


@end


#endif