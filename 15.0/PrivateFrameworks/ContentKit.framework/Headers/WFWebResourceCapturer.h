// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWEBRESOURCECAPTURER_H
#define WFWEBRESOURCECAPTURER_H


#import <Foundation/Foundation.h>


@interface WFWebResourceCapturer : NSObject



+(void)getPasteboardRepresentationForWebResource:(id)arg0 type:(id)arg1 completionHandler:(id)arg2 ;
+(void)getPrintFormatterForWebResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)generatePDFForWebResource:(id)arg0 includeMargin:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif