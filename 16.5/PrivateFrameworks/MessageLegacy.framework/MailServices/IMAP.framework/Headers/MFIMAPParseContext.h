// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPPARSECONTEXT_H
#define MFIMAPPARSECONTEXT_H


#import <Foundation/Foundation.h>

#import "MFIMAPConnection.h"
#import "MFIMAPResponse.h"

@interface MFIMAPParseContext : NSObject {
    MFIMAPConnection *_connection;
    MFIMAPResponse *_response;
    char * _start;
    char * _end;
    char * _originalStart;
    char * _originalEnd;
    char * _lastLoggedChar;
    BOOL _invalid;
}




+(BOOL)hadWarningOrError;
+(void)resetWarningOrError;
-(BOOL)getNumber:(*NSUInteger)arg0 ;
-(BOOL)isValid;
-(BOOL)literalWithResponseConsumer:(id)arg0 section:(id)arg1 ;
-(BOOL)match:(char *)arg0 ;
-(BOOL)match:(char *)arg0 upToSpecial:(char *)arg1 ;
-(BOOL)parseSpace;
-(char *)end;
-(char *)nextSeparator;
-(char *)start;
-(id)connection;
-(id)copyAString;
-(id)copyArray;
-(id)copyAtom;
-(id)copyDateTime;
-(id)copyLiteral;
-(id)copyLiteralString;
-(id)copyMessageSet;
-(id)copyNilOrString;
-(id)copyNumber;
-(id)copyQuotedString;
-(id)copyStringFrom:(char *)arg0 to:(char *)arg1 withCaseOption:(int)arg2 ;
-(id)initWithConnection:(id)arg0 response:(id)arg1 start:(char *)arg2 end:(char *)arg3 ;
-(id)response;
-(struct __CFArray *)copyArrayAllowingNulls:(BOOL)arg0 ;
-(unsigned char)lookAhead;
-(void)dealloc;
-(void)emitError:(id)arg0 ;
-(void)emitWarning:(id)arg0 ;
-(void)increment;
-(void)logReadChars;
-(void)setEnd:(char *)arg0 ;
-(void)setStart:(char *)arg0 ;


@end


#endif