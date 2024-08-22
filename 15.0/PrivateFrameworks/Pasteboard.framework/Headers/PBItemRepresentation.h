// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(id)_loadCompletionBlock:(id)arg0 ;
-(id)copyWithDoNothingLoaderBlock;
-(id)initWithNSItemRepresentation:(id)arg0 ;
-(id)initWithType:(id)arg0 preferredRepresentation:(NSUInteger)arg1 loader:(id)arg2 ;
-(id)loadDataWithCompletion:(id)arg0 ;
-(id)loadFileCopyWithCompletion:(id)arg0 ;
-(id)loadOpenInPlaceWithCompletion:(id)arg0 ;
-(id)loadWithCompletionHandler:(id)arg0 ;
// -(id)performProgressTrackingWithLoaderBlock:(id)arg0 onCancelCallback:(unk)arg1  ;
-(id)v2_loadCompletionBlock:(id)arg0 ;
-(id)v2_loadOpenInPlaceWithCompletion:(id)arg0 ;
-(void)setLoaderBlock:(id)arg0 ;
-(void)v2_setLoader:(id)arg0 ;


@end


#endif