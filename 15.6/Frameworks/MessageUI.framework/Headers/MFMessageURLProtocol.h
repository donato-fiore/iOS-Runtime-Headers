// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGEURLPROTOCOL_H
#define MFMESSAGEURLPROTOCOL_H

@class NSURLProtocol, EMContentRepresentation, NSString, EFPromise;
@protocol EFLoggable, EFCancelable;



@interface MFMessageURLProtocol : NSURLProtocol <EFLoggable>



@property (retain, nonatomic) NSObject<EFCancelable> *cancelable; // ivar: _cancelable
@property (retain, nonatomic) EMContentRepresentation *contentRepresentation; // ivar: _contentRepresentation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EFPromise *promise; // ivar: _promise
@property (readonly) Class superclass;


+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)contentRepresentationForURL:(id)arg0 ;
+(id)log;
+(id)registry;
+(void)initialize;
+(void)registerContentRepresentation:(id)arg0 ;
+(void)setRegistry:(id)arg0 ;
-(id)_cachedResponseWithData:(id)arg0 mimeType:(id)arg1 error:(*id)arg2 ;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;


@end


#endif