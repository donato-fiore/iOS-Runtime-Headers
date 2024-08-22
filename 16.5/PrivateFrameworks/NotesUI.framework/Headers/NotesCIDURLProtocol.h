// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTESCIDURLPROTOCOL_H
#define NOTESCIDURLPROTOCOL_H

@class NSURLProtocol;



@interface NotesCIDURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(void)registerDataProvider:(id)arg0 forCIDURL:(id)arg1 ;
+(void)unregisterDataProviderForCIDURL:(id)arg0 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif