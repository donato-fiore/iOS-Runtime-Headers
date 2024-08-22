// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPARCHIVE_H
#define CPARCHIVE_H

@class NSMutableString, NSData;
@protocol CPDisposable;

#import <Foundation/Foundation.h>


@interface CPArchive : NSObject <CPDisposable>

 {
    *__CFArray selections;
    *__CFArray imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
}




-(id)html;
-(id)init;
-(id)plainText;
-(id)webArchiveData;
-(void)addSelection:(struct CGPDFSelection *)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;


@end


#endif