// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSTRUCTUREDDATAFOUNDATIONREADER_H
#define HMDSTRUCTUREDDATAFOUNDATIONREADER_H

@class NSEnumerator, NSDictionary, NSMutableArray;


#import "HMDTokenBasedStructuredReader.h"

@interface HMDStructuredDataFoundationReader : HMDTokenBasedStructuredReader {
    NSEnumerator *_enumerator;
    NSDictionary *_dictionary;
    NSMutableArray *_stack;
}




-(struct _HMDStructuredDataToken )nextTokenAfterToken:(struct _HMDStructuredDataToken *)arg0 ;
-(void)failWithError:(id)arg0 ;


@end


#endif