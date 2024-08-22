// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADCALENDARDATABASEREDACTOR_H
#define CADCALENDARDATABASEREDACTOR_H

@class NSURL;
@protocol CADDiagnosticLogContext;

#import <Foundation/Foundation.h>


@interface CADCalendarDatabaseRedactor : NSObject {
    id<CADDiagnosticLogContext> *_context;
}


@property (retain, nonatomic) NSURL *path; // ivar: _path


-(BOOL)_redactOmatic:(struct sqlite3 *)arg0 ;
-(BOOL)_specialRedactions:(struct sqlite3 *)arg0 ;
-(BOOL)redact;
-(id)initWithPath:(id)arg0 context:(id)arg1 ;


@end


#endif