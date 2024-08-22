// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLPARSERCONTROLLER_H
#define SAMLPARSERCONTROLLER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SAMLParserController : NSObject

@property (retain, nonatomic) NSData *schemaData; // ivar: _schemaData


+(id)sharedInstance;
+(void)initialize;
-(id)dataFromString:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)newAttributeQuery:(id)arg0 error:(*id)arg1 ;
-(id)newAuthNRequest:(id)arg0 error:(*id)arg1 ;
-(id)newAuthZQuery:(id)arg0 channelId:(id)arg1 error:(*id)arg2 ;
-(id)newLogoutRequest:(*id)arg0 ;
-(id)parseCachedResponse:(id)arg0 error:(*id)arg1 ;
-(id)parseResponse:(id)arg0 error:(*id)arg1 ;
-(id)schema;


@end


#endif