// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLCHANGEDRECORDVIEW_H
#define CPLCHANGEDRECORDVIEW_H



#import "CPLRecordView.h"
#import "CPLRecordChange.h"

@interface CPLChangedRecordView : CPLRecordView

@property (readonly, nonatomic) CPLRecordView *baseRecordView; // ivar: _baseRecordView
@property (readonly, nonatomic) CPLRecordChange *change; // ivar: _change


-(BOOL)supportsResources;
-(Class)recordClass;
-(id)changeForType:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithChange:(id)arg0 overRecordView:(id)arg1 ;
-(id)placeholderRecord;
-(id)recordChangeData;
-(id)redactedDescription;
-(id)scopedIdentifier;
-(id)synthesizedRecord;


@end


#endif