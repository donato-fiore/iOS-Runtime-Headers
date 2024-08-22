// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRXMLVALIDATOR_H
#define XRXMLVALIDATOR_H

@class NSURL, NSArray, NSFileHandle;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface XRXMLValidator : NSObject {
    NSURL *_url;
    NSURL *_schemaURL;
    NSArray *_errorReplacements;
    NSUInteger _errorsEmittedCount;
    BOOL _limitMessageEmitted;
}


@property (retain) NSFileHandle *diagnosticFile; // ivar: _diagnosticFile
@property (retain) NSFileHandle *errorFile; // ivar: _errorFile
@property NSUInteger errorLimit; // ivar: _errorLimit
@property (retain) NSObject<OS_os_log> *log; // ivar: _log


-(BOOL)validate;
-(id)findErrorMessageForErrorPtr:(struct _xmlError *)arg0 ;
-(id)initWithSourceURL:(id)arg0 schemaURL:(id)arg1 ;


@end


#endif