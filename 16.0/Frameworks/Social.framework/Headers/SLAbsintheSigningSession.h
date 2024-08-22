// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLABSINTHESIGNINGSESSION_H
#define SLABSINTHESIGNINGSESSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SLAbsintheSigningSession : NSObject {
    *NACContextOpaque_ _context;
    NSString *_certURL;
    NSString *_sessionURL;
}




-(BOOL)establish;
-(id)_urlEncodedString:(id)arg0 ;
-(id)initWithCertURL:(id)arg0 sessionURL:(id)arg1 ;
-(id)signatureForData:(id)arg0 ;
-(void)dealloc;


@end


#endif