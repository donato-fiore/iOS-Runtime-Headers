// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCITEMTHUMBNAIL_H
#define DOCITEMTHUMBNAIL_H

@class NSMutableArray, NSString, FPItem, NSHashTable, UIImage;
@protocol DOCThumbnailListener, DOCThumbnail;

#import <Foundation/Foundation.h>

#import "DOCThumbnailRequest.h"
#import "DOCThumbnailDescriptor.h"
#import "DOCThumbnailGenerator.h"

@interface DOCItemThumbnail : NSObject <DOCThumbnailListener, DOCThumbnail>

 {
    NSMutableArray *_generationCompletionHandlers;
}


@property (readonly, nonatomic) DOCThumbnailRequest *currentRequest; // ivar: _currentRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) NSObject<DOCThumbnail> *fallback; // ivar: _fallback
@property (readonly, weak, nonatomic) DOCThumbnailGenerator *generator; // ivar: _generator
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) BOOL isRepresentativeIcon;
@property (readonly, nonatomic) FPItem *item; // ivar: _item
@property (readonly, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) CGFloat minimumSize;
@property (readonly, nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) BOOL representativeIcon; // ivar: _representativeIcon
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) NSUInteger style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage


-(BOOL)registerGenerationCompletionHandler:(id)arg0 ;
-(id)averageColorInRect:(struct CGRect )arg0 ;
-(id)initWithGenerator:(id)arg0 item:(id)arg1 descriptor:(id)arg2 fallback:(id)arg3 ;
-(void)_callGenerationCompletionHandlers;
-(void)_cancelCurrentRequest;
-(void)_fetchThumbnailWithOptions:(NSUInteger)arg0 ;
-(void)_notifyListeners;
-(void)addListener:(id)arg0 ;
-(void)fetchWithOptions:(NSUInteger)arg0 ;
-(void)removeListener:(id)arg0 ;
-(void)scheduleUpdateIfNeeded;
-(void)thumbnailLoaded:(id)arg0 ;
-(void)thumbnailOperationDidLoadThumbnail:(id)arg0 representativeIcon:(BOOL)arg1 ;
-(void)updateItemTo:(id)arg0 ;


@end


#endif