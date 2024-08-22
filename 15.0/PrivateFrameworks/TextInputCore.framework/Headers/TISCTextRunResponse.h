// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISCTEXTRUNRESPONSE_H
#define TISCTEXTRUNRESPONSE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TISCTextRunResponse : NSObject {
    *__CFArray _ctLines;
    NSMutableArray *_widths;
    *__CTFont _font;
}




+(id)textRunResponseByMergingResponses:(id)arg0 ;
+(id)textRunResponseWithFont:(struct __CTFont *)arg0 ;
-(id)widths;
-(struct __CFArray *)ctLines;
-(struct __CTFont *)font;
-(void)dealloc;


@end


#endif