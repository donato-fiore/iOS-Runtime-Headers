// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPIVOTCONDITIONALFORMAT_H
#define EDPIVOTCONDITIONALFORMAT_H


#import <Foundation/Foundation.h>

#import "EDCollection.h"

@interface EDPivotConditionalFormat : NSObject {
    NSUInteger mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}




+(id)pivotConditionalFormat;
-(NSUInteger)priority;
-(id)description;
-(id)init;
-(id)pivotAreas;
-(int)scope;
-(int)type;
-(void)setPriority:(NSUInteger)arg0 ;
-(void)setScope:(int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif