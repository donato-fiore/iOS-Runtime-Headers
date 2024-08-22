// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUHTMLLOG_H
#define TSUHTMLLOG_H

@class NSFileHandle, NSString;

#import <Foundation/Foundation.h>


@interface TSUHTMLLog : NSObject {
    NSFileHandle *_handle;
    BOOL _logStarted;
    NSUInteger _uniquifier;
    NSUInteger _tableRow;
}


@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (copy, nonatomic) NSString *script; // ivar: _script
@property (copy, nonatomic) NSString *stylesheet; // ivar: _stylesheet
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithPath:(id)arg0 ;
-(id)uniqueIdentifierWithPrefix:(id)arg0 ;
-(void)_writeMarkupData:(id)arg0 ;
-(void)clear;
-(void)close;
-(void)dealloc;
-(void)logBegin;
-(void)logEnd;
-(void)openInBrowser;
-(void)writeMarkup:(id)arg0 ;
-(void)writeText:(id)arg0 ;


@end


#endif