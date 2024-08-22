// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPHOTOPICKERPROGRESSMANAGER_H
#define MFPHOTOPICKERPROGRESSMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFPhotoPickerProgressManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *progressItems; // ivar: _progressItems


-(BOOL)anyRequestExists;
-(BOOL)requestExistsForIndexPath:(id)arg0 ;
-(CGFloat)progressForIndexPath:(id)arg0 ;
-(id)init;
-(void)_cancelProgressItem:(id)arg0 ;
-(void)cancelEverything;
-(void)cancelEverythingAtIndexPath:(id)arg0 ;
-(void)setExportSession:(id)arg0 forIndexPath:(id)arg1 ;
-(void)setImageRequestID:(int)arg0 forIndexPath:(id)arg1 ;
-(void)setProgress:(CGFloat)arg0 forIndexPath:(id)arg1 ;


@end


#endif