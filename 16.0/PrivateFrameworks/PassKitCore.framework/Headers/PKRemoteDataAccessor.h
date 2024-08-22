// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREMOTEDATAACCESSOR_H
#define PKREMOTEDATAACCESSOR_H

@class NSString;


#import "PKDataAccessor.h"
#import "PKPassLibrary.h"

@interface PKRemoteDataAccessor : PKDataAccessor

@property (readonly, nonatomic) PKPassLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSString *objectUniqueID; // ivar: _objectUniqueID


-(id)archiveData;
-(id)cachedImageSetForType:(NSInteger)arg0 withDisplayProfile:(id)arg1 displayTraits:(id)arg2 ;
-(id)content;
-(id)dataForBundleResource:(id)arg0 ;
-(id)dataForBundleResourceNamed:(id)arg0 withExtension:(id)arg1 ;
-(id)dataForBundleResources:(id)arg0 ;
-(id)displayProfileOfType:(NSInteger)arg0 ;
-(id)imageSetForType:(NSInteger)arg0 screenScale:(CGFloat)arg1 suffix:(id)arg2 displayProfile:(id)arg3 preheat:(BOOL)arg4 ;
-(id)initWithLibrary:(id)arg0 objectUniqueID:(id)arg1 ;
-(id)passLocalizedStringForKey:(id)arg0 ;
-(void)contentWithCompletion:(id)arg0 ;
-(void)imageSetForType:(NSInteger)arg0 screenScale:(CGFloat)arg1 suffix:(id)arg2 displayProfile:(id)arg3 preheat:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(id)arg0 ;
-(void)revocationStatusWithCompletion:(id)arg0 ;
-(void)updateSettings:(NSUInteger)arg0 ;


@end


#endif