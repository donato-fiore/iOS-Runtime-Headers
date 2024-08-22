// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSITEMPROVIDERREPRESENTATION_H
#define NSITEMPROVIDERREPRESENTATION_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSItemProviderRepresentation : NSObject {
    id *_loader;
}


@property (nonatomic) NSInteger preferredRepresentation; // ivar: _preferredRepresentation
@property (readonly, copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (nonatomic) NSInteger visibility; // ivar: _visibility


-(id)_loadWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(id)copyWithDoNothingLoaderBlock;
-(id)initWithType:(id)arg0 preferredRepresentation:(NSInteger)arg1 loader:(id)arg2 ;
-(id)initWithType_v2:(id)arg0 preferredRepresentation:(NSInteger)arg1 loader:(id)arg2 ;
-(id)loadDataWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadDataWithOptions_v2:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadFileCopyWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadFileCopyWithOptions_v2:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadOpenInPlaceWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadOpenInPlaceWithOptions_v2:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadWithOptions_v2:(id)arg0 completionHandler:(id)arg1 ;
// -(id)performProgressTrackingWithLoaderBlock:(id)arg0 onCancelCallback:(unk)arg1  ;
-(void)dealloc;
-(void)setLoaderBlock:(id)arg0 ;
-(void)setLoaderBlock_v2:(id)arg0 ;


@end


#endif