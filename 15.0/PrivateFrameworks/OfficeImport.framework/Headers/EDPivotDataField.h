// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDPIVOTDATAFIELD_H
#define EDPIVOTDATAFIELD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EDPivotDataField : NSObject {
    NSInteger mBaseField;
    NSUInteger mBaseItem;
    NSUInteger mFieldId;
    NSUInteger mNumFmtId;
    NSString *mName;
    int mFormat;
}




+(id)pivotDataField;
-(NSInteger)baseField;
-(NSUInteger)baseItem;
-(NSUInteger)fieldId;
-(NSUInteger)numFmtId;
-(id)description;
-(id)init;
-(id)name;
-(int)showDataAs;
-(void)setBaseField:(NSInteger)arg0 ;
-(void)setBaseItem:(NSUInteger)arg0 ;
-(void)setFieldId:(NSUInteger)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setNumFmtId:(NSUInteger)arg0 ;
-(void)setShowDataAs:(int)arg0 ;


@end


#endif