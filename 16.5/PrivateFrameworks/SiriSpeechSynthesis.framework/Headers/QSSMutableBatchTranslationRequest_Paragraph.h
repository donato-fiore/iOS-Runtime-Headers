// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEBATCHTRANSLATIONREQUEST_PARAGRAPH_H
#define QSSMUTABLEBATCHTRANSLATIONREQUEST_PARAGRAPH_H

@class Paragraph, NSString, NSArray;



@interface QSSMutableBatchTranslationRequest_Paragraph : Paragraph

@property (copy, nonatomic) NSString *paragraph_id;
@property (copy, nonatomic) NSArray *span;
@property (copy, nonatomic) NSString *text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif