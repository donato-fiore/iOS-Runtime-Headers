// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPHEADERFRAGMENTIMPORTHELPER_H
#define TPHEADERFRAGMENTIMPORTHELPER_H

@class TSPObjectContext, NSCharacterSet;

#import <Foundation/Foundation.h>


@interface TPHeaderFragmentImportHelper : NSObject {
    *id _fragments;
    TSPObjectContext *_storageContext;
    TSPObjectContext *_objectsContext;
    NSCharacterSet *_whitespaceCharacterSet;
    NSCharacterSet *_nonWhitespaceCharacterSet;
}




-(BOOL)p_storageIsEffectivelyEmpty:(id)arg0 ;
-(NSUInteger)countOfWhitespaceRunsInString:(id)arg0 ranges:(struct _NSRange )arg1 ;
-(id)initWithFragments:(*id)arg0 storageContext:(id)arg1 objectsContext:(id)arg2 ;
-(void)p_splitStorageInThree:(NSInteger)arg0 withRanges:(struct _NSRange )arg1 ;
-(void)p_splitStorageInTwo:(NSInteger)arg0 withRanges:(struct _NSRange )arg1 firstTarget:(NSInteger)arg2 secondTarget:(NSInteger)arg3 ;
-(void)processFragmentsForSpaceFormatting;


@end


#endif