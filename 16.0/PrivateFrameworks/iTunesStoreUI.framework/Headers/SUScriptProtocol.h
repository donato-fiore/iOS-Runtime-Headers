// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTPROTOCOL_H
#define SUSCRIPTPROTOCOL_H

@class NSArray, NSString;


#import "SUScriptObject.h"
#import "SUScriptURLRequest.h"

@interface SUScriptProtocol : SUScriptObject

@property (retain) NSArray *allowedOrientations;
@property (readonly) NSString *clientIdentifier;
@property (retain) NSString *copyright;
@property BOOL excludeFromNavigationHistory;
@property (retain) SUScriptURLRequest *overlayBackgroundURLRequest;
@property (readonly) NSString *protocolVersion;
@property BOOL shouldShowInOverlay;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_copyProtocol;
-(id)_webThreadValueForProtocolKey:(id)arg0 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_setProtocol:(id)arg0 ;
-(void)_setValue:(id)arg0 forProtocolKey:(id)arg1 ;
-(void)setValuesFromDictionary:(id)arg0 ;


@end


#endif