// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTIMESSAGEREQUESTMMCSDOWNLOADTOKEN_H
#define FTIMESSAGEREQUESTMMCSDOWNLOADTOKEN_H

@class IDSMessage, NSString, NSData;
@protocol NSCopying;



@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying>



@property (copy) NSString *authURLString; // ivar: _authURLString
@property (copy) NSString *contentHeaders; // ivar: _contentHeaders
@property NSInteger contentVersion; // ivar: _contentVersion
@property (copy) NSString *owner; // ivar: _owner
@property (copy) NSString *responseAuthToken; // ivar: _responseAuthToken
@property (copy) NSData *responseContentBody; // ivar: _responseContentBody
@property NSInteger responseContentVersion; // ivar: _responseContentVersion
@property (copy) NSString *responseRequestorID; // ivar: _responseRequestorID
@property (copy) NSData *signature; // ivar: _signature


-(NSInteger)command;
-(NSInteger)responseCommand;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)messageBody;
-(id)requiredKeys;
-(void)dealloc;
-(void)handleResponseDictionary:(id)arg0 ;


@end


#endif