// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPIVOTPAGEFIELD_H
#define EDPIVOTPAGEFIELD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EDPivotPageField : NSObject {
    NSUInteger mFieldId;
    NSString *mCap;
    NSString *mName;
}




+(id)pivotPageField;
-(NSUInteger)fieldId;
-(id)cap;
-(id)description;
-(id)init;
-(id)name;
-(void)setCap:(id)arg0 ;
-(void)setFieldId:(NSUInteger)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif