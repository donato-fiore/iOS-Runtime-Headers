// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORMAUTOFILLPARSECCROWDSOURCEDCORRECTIONSPROCESSOR_H
#define WBSFORMAUTOFILLPARSECCROWDSOURCEDCORRECTIONSPROCESSOR_H

@protocol WBSFormAutoFillCorrectionsStore;

#import <Foundation/Foundation.h>


@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject {
    id<WBSFormAutoFillCorrectionsStore> *_correctionsStore;
}




+(id)_correctionsSchema;
+(id)_schemaWithExpectedClass:(Class)arg0 errorCode:(NSInteger)arg1 isOptional:(BOOL)arg2 ;
+(id)test_correctionsSchema;
-(id)initWithCorrectionsStore:(id)arg0 ;
-(void)getLastCorrectionsRetrievalURLStringWithResultHandler:(id)arg0 ;
-(void)setCorrectionsWithJSONData:(id)arg0 retrievalURLString:(id)arg1 ;


@end


#endif