// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGPPTLAYOUTTESTER_H
#define PXGPPTLAYOUTTESTER_H

@class NSString, NSArray;
@protocol PXGGeneratedLayoutDelegate;

#import <Foundation/Foundation.h>


@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *inputItems; // ivar: _inputItems
@property (readonly) Class superclass;


+(id)mockPaddingValues;
-(id)generatedLayout:(id)arg0 inputItemAtIndex:(unsigned int)arg1 ;
-(id)generatedLayout:(id)arg0 objectReferenceAtIndex:(unsigned int)arg1 ;
-(struct CGRect )generatedLayout:(id)arg0 bestCropRectForInputItemAtIndex:(unsigned int)arg1 withAspectRatio:(CGFloat)arg2 ;
-(void)_iterateEditorialConfigurationsForItemsCount:(NSInteger)arg0 itemsIncrement:(NSInteger)arg1 handler:(id)arg2 ;
-(void)_iterateGridConfigurationsForItemsCount:(NSInteger)arg0 itemsIncrement:(NSInteger)arg1 handler:(id)arg2 ;
-(void)runEditorialLayoutTestWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)runGridLayoutTestWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif