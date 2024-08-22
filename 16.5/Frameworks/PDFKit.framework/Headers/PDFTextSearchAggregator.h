// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFTEXTSEARCHAGGREGATOR_H
#define PDFTEXTSEARCHAGGREGATOR_H

@class NSString;
@protocol PDFDocumentAsyncFindDelegate, UITextSearchAggregator;

#import <Foundation/Foundation.h>


@interface PDFTextSearchAggregator : NSObject <PDFDocumentAsyncFindDelegate>

 {
    BOOL _isActive;
}


@property (readonly, nonatomic) NSObject<UITextSearchAggregator> *aggregator; // ivar: _aggregator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;


-(BOOL)cancelFind;
-(id)initWithSearchString:(id)arg0 aggregator:(id)arg1 ;
-(void)foundResults:(id)arg0 forDocument:(id)arg1 ;
-(void)foundResults:(id)arg0 forPage:(id)arg1 ;
-(void)invalidate;


@end


#endif