// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTXMLHTTPSTOREREQUEST_H
#define SUSCRIPTXMLHTTPSTOREREQUEST_H

@class NSMutableDictionary, SSMutableURLRequestProperties, NSDictionary, NSString, SSAuthenticationContext, ISDataProvider, WebScriptObject;
@protocol SUScriptXMLHTTPStoreRequestDelegate;


#import "SUScriptObject.h"
#import "SUXMLHTTPStoreRequestOperation.h"

@interface SUScriptXMLHTTPStoreRequest : SUScriptObject {
    NSMutableDictionary *_functions;
    SUXMLHTTPStoreRequestOperation *_operation;
    NSUInteger _readyState;
    SSMutableURLRequestProperties *_requestProperties;
    NSDictionary *_responseHeaders;
    NSString *_responseText;
    BOOL _shouldSendGUIDHeader;
    NSUInteger _status;
    NSString *_statusText;
    NSUInteger _timeout;
    BOOL _useJSONEncoding;
}


@property (retain, getter=isJSONEncoded) id *JSONEncoded;
@property (retain, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain, nonatomic) ISDataProvider *dataProvider; // ivar: _dataProvider
@property (weak) NSObject<SUScriptXMLHTTPStoreRequestDelegate> *delegate; // ivar: _delegate
@property (retain) WebScriptObject *onabort;
@property (retain) WebScriptObject *onerror;
@property (retain) WebScriptObject *onload;
@property (retain) WebScriptObject *onloadend;
@property (retain) WebScriptObject *onreadystatechange;
@property (retain) WebScriptObject *ontimeout;
@property (readonly) NSUInteger readyState;
@property (readonly, copy) NSString *responseText;
@property (retain) id *shouldSendGUIDHeader;
@property (readonly) NSUInteger status;
@property (readonly, copy) NSString *statusText;
@property NSUInteger timeout;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_clientInfoHeader;
-(id)_gsTokenForAIDAAccount:(id)arg0 accountStore:(id)arg1 ;
-(id)_scriptObjectForFunctionName:(id)arg0 ;
-(id)_uniqueDeviceID;
-(id)attributeKeys;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)_callFunctionWithName:(id)arg0 arguments:(id)arg1 ;
-(void)_setScriptObject:(id)arg0 forFunctionName:(id)arg1 ;
-(void)abort;
-(void)dealloc;
-(void)openWithHTTPMethod:(id)arg0 URL:(id)arg1 isAsync:(id)arg2 username:(id)arg3 password:(id)arg4 ;
-(void)sendWithBodyData:(id)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;


@end


#endif