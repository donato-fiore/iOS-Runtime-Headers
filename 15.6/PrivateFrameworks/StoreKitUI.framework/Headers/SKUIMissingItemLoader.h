// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMISSINGITEMLOADER_H
#define SKUIMISSINGITEMLOADER_H

@class NSMutableDictionary, NSString;
@protocol SKUIItemRequestDelegate, SKUIMissingItemDelegate;

#import <Foundation/Foundation.h>

#import "SKUIResourceLoader.h"

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate>

 {
    SKUIResourceLoader *_loader;
    NSMutableDictionary *_requests;
}


@property (nonatomic) NSInteger batchSize; // ivar: _batchSize
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIMissingItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *imageProfile; // ivar: _imageProfile
@property (copy, nonatomic) NSString *keyProfile; // ivar: _keyProfile
@property (readonly) Class superclass;


-(id)_existingRequestIDForItemID:(id)arg0 ;
-(id)init;
-(id)initWithResourceLoader:(id)arg0 ;
-(void)_requestItems:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)itemRequest:(id)arg0 didFinishWithItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;
-(void)loadItemsForPageComponent:(id)arg0 startIndex:(NSInteger)arg1 reason:(NSInteger)arg2 ;
-(void)loadItemsWithIdentifiers:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif