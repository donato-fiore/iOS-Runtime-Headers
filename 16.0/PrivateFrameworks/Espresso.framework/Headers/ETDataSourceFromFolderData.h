// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETDATASOURCEFROMFOLDERDATA_H
#define ETDATASOURCEFROMFOLDERDATA_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol ETDataSource;

#import <Foundation/Foundation.h>


@interface ETDataSourceFromFolderData : NSObject <ETDataSource>



@property BOOL balanceClassesForTraining; // ivar: _balanceClassesForTraining
@property (retain, nonatomic) NSMutableArray *classNames; // ivar: _classNames
@property (retain, nonatomic) NSMutableDictionary *folderToImages; // ivar: _folderToImages
@property (retain, nonatomic) NSArray *imageFileNames; // ivar: _imageFileNames
@property (retain, nonatomic) NSString *imagesDir; // ivar: _imagesDir
@property int numberOfClasses; // ivar: _numberOfClasses
@property (retain, nonatomic) NSMutableDictionary *pathToClassIndex; // ivar: _pathToClassIndex


-(id)dataPointAtIndex:(int)arg0 ;
-(id)initWithFolder:(id)arg0 balanceClassesForTraining:(BOOL)arg1 ;
-(int)numberOfDataPoints;
-(struct vImage_Buffer )bufferWithPath:(id)arg0 ;


@end


#endif