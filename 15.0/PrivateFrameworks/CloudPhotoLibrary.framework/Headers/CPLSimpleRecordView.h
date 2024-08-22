// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLSIMPLERECORDVIEW_H
#define CPLSIMPLERECORDVIEW_H



#import "CPLRecordView.h"
#import "CPLRecordChange.h"

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}




-(id)initWithRecord:(id)arg0 ;
-(id)scopedIdentifier;
-(id)synthesizedRecord;


@end


#endif