// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBITEMREPRESENTATION_H
#define PBITEMREPRESENTATION_H

@class NSString;
@protocol PBItemRepresentationDataTransferDelegate;

#import <Foundation/Foundation.h>


@interface PBItemRepresentation : NSObject {
    id *_loader;
}


@property (weak, nonatomic) NSObject<PBItemRepresentationDataTransferDelegate> *dataTransferDelegate; // ivar: _dataTransferDelegate
@property (nonatomic) BOOL isDataAvailableImmediately; // ivar: _isDataAvailableImmediately
@property (nonatomic) NSUInteger preferredRepresentation; // ivar: _preferredRepresentation
@property (readonly, copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (nonatomic) NSInteger visibility; // ivar: _visibility


-(id)_loadWithContext:(id)arg0 completionBlock:(id)arg1 ;
-(id)copyWithDoNothingLoaderBlock;
-(id)initWithNSItemRepresentation:(id)arg0 ;
-(id)initWithType:(id)arg0 preferredRepresentation:(NSUInteger)arg1 loader:(id)arg2 ;
-(id)initWithType:(id)arg0 preferredRepresentation:(NSUInteger)arg1 v2_loader:(id)arg2 ;
-(id)initWithType:(id)arg0 preferredRepresentation:(NSUInteger)arg1 v3_loader:(id)arg2 ;
-(id)loadDataWithCompletion:(id)arg0 ;
-(id)loadDataWithContext:(id)arg0 completion:(id)arg1 ;
-(id)loadDataWithDetailedCompletion:(id)arg0 ;
-(id)loadFileCopyWithCompletion:(id)arg0 ;
-(id)loadFileCopyWithContext:(id)arg0 completion:(id)arg1 ;
-(id)loadFileCopyWithDetailedCompletion:(id)arg0 ;
-(id)loadOpenInPlaceWithCompletion:(id)arg0 ;
-(id)loadOpenInPlaceWithContext:(id)arg0 completion:(id)arg1 ;
-(id)loadOpenInPlaceWithDetailedCompletion:(id)arg0 ;
-(id)loadWithCompletionHandler:(id)arg0 ;
-(id)loadWithContext:(id)arg0 completionHandler:(id)arg1 ;
// -(id)performProgressTrackingWithLoaderBlock:(id)arg0 onCancelCallback:(unk)arg1  ;
-(void)setLoaderBlock:(id)arg0 ;


@end


#endif