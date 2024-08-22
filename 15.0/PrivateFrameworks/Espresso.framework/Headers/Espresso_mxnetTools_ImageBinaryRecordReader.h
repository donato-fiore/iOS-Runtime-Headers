// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESPRESSO_MXNETTOOLS_IMAGEBINARYRECORDREADER_H
#define ESPRESSO_MXNETTOOLS_IMAGEBINARYRECORDREADER_H

@class NSMutableArray, NSFileHandle;

#import <Foundation/Foundation.h>


@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject

@property NSUInteger currentOffset; // ivar: _currentOffset
@property _mxnetTools_imageHeader_t_ imageHeader; // ivar: _imageHeader
@property (retain) NSMutableArray *labelsPrivate; // ivar: _labelsPrivate
@property (retain) NSFileHandle *recFileHandle; // ivar: _recFileHandle
@property _mxnetTools_recordHeader_t_ recordHeader; // ivar: _recordHeader


-(BOOL)nextRecordAndError:(*id)arg0 ;
-(BOOL)seekRecordWithID:(struct _mxnetTools_imageID_t_ *)arg0 error:(*id)arg1 ;
-(id)imageData;
-(id)initWithRecFile:(id)arg0 error:(*id)arg1 ;
-(id)labels;
-(struct _mxnetTools_imageID_t_ )imageID;


@end


#endif