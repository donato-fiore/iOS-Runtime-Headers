// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUANFFONTLOADER_H
#define NUANFFONTLOADER_H

@class FCANFContent, FCAsyncOnceOperation, NSString, FCFlintResourceManager, NSMutableArray;
@protocol NUFontRegistrator, NUFontRegistration;

#import <Foundation/Foundation.h>


@interface NUANFFontLoader : NSObject <NUFontRegistrator>



@property (readonly, nonatomic) FCANFContent *anfContent; // ivar: _anfContent
@property (readonly, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // ivar: _asyncOnceOperation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // ivar: _flintResourceManager
@property (readonly, nonatomic) NSObject<NUFontRegistration> *fontRegistration; // ivar: _fontRegistration
@property (readonly, nonatomic) NSMutableArray *fontResourcesRegistered; // ivar: _fontResourcesRegistered
@property (readonly, nonatomic) NSMutableArray *fontResourcesToRegister; // ivar: _fontResourcesToRegister
@property (readonly, nonatomic) BOOL hasLoaded; // ivar: _hasLoaded
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (readonly) Class superclass;


-(id)asyncLoadFontsOnceWithCompletion:(id)arg0 ;
-(id)initWithANFContent:(id)arg0 flintResourceManager:(id)arg1 fontRegistration:(id)arg2 ;
-(id)loadFontsWithCompletion:(id)arg0 ;
-(void)registerFontsWithCompletion:(id)arg0 ;
-(void)unregisterFontsWithCompletion:(id)arg0 ;


@end


#endif