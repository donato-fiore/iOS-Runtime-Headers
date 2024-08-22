// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASIGNINGSESSION_H
#define AASIGNINGSESSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AASigningSession : NSObject {
    *NACContextOpaque_ _context;
    NSString *_certURL;
    NSString *_sessionURL;
}


@property (readonly, nonatomic) int error; // ivar: _error


+(id)_badURLError;
+(id)establishedSessionWithCertURL:(id)arg0 sessionURL:(id)arg1 error:(*id)arg2 ;
-(id)initWithCertURL:(id)arg0 sessionURL:(id)arg1 ;
-(id)signatureForData:(id)arg0 ;
-(void)dealloc;
-(void)establishSession;


@end


#endif