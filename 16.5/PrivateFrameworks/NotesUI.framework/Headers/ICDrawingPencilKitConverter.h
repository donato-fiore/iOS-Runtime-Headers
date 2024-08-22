// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDRAWINGPENCILKITCONVERTER_H
#define ICDRAWINGPENCILKITCONVERTER_H

@class NSOperationQueue, NSArray, NSMapTable, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDrawingPencilKitConverter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *canAutoUpdateDispatchQueue; // ivar: _canAutoUpdateDispatchQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *convertDispatchQueue; // ivar: _convertDispatchQueue
@property (retain, nonatomic) NSOperationQueue *converterQueue; // ivar: _converterQueue
@property (readonly, nonatomic) NSArray *failedSketches;
@property (nonatomic) BOOL isThrowaway; // ivar: _isThrowaway
@property (retain, nonatomic) NSMapTable *lastOperationForAttachmentID; // ivar: _lastOperationForAttachmentID
@property (retain, nonatomic) NSMutableArray *mutableFailedSketches; // ivar: _mutableFailedSketches


+(BOOL)canUpdateFullscreenSketchAttachment:(id)arg0 ;
+(BOOL)canUpdateInlineDrawingAttachment:(id)arg0 ;
+(NSUInteger)countOfUpdatableDrawingsInNote:(id)arg0 ;
+(id)newThrowawayConverter;
+(id)sharedConverter;
-(BOOL)compareDrawingAttachment:(id)arg0 withConvertedDrawing:(id)arg1 ;
-(BOOL)shouldAutoConvertNote:(id)arg0 ;
-(BOOL)shouldConvertAllDrawingsIfNeeded;
-(NSUInteger)convertAllSketchesInNote:(id)arg0 ;
-(NSUInteger)countOfDrawingsNeedingConversionInNote:(id)arg0 ;
-(id)addOperationForAttachment:(id)arg0 automatic:(BOOL)arg1 ;
-(id)convertSketch:(id)arg0 ;
-(id)convertSketchAttachment:(id)arg0 toInlineDrawingAtRange:(struct _NSRange )arg1 inNote:(id)arg2 ;
-(id)init;
-(id)updateInlineDrawingAttachment:(id)arg0 ;
-(void)canAutoUpdateDrawingsInAccount:(id)arg0 completion:(id)arg1 ;
-(void)convertAllDrawingsIfNeeded;
-(void)convertAllSketchesWithProgress:(id)arg0 ;
-(void)convertAllSketchesWithProgress:(id)arg0 completion:(id)arg1 ;
-(void)convertDrawingsInNote:(id)arg0 inWindow:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)convertDrawingsInNote:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)convertDrawingsInNoteIfNeeded:(id)arg0 ;
-(void)operationComplete:(id)arg0 ;


@end


#endif