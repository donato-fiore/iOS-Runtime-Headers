// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLESPRESSOFORMATTER_H
#define APODMLESPRESSOFORMATTER_H


#import <Foundation/Foundation.h>


@interface APOdmlEspressoFormatter : NSObject



-(id)_attachmentURLWithName:(id)arg0 fileName:(id)arg1 ;
-(id)_featuresFromDESRecord:(id)arg0 isCounterfactual:(id)arg1 ;
-(id)_parseRecordData:(id)arg0 isCounterfactual:(id)arg1 ;
-(id)formatRecipe:(id)arg0 multipleRecordInfo:(id)arg1 multipleRecordData:(id)arg2 attachments:(id)arg3 error:(*id)arg4 ;
-(void)printDESRecordInSegments:(id)arg0 ;


@end


#endif