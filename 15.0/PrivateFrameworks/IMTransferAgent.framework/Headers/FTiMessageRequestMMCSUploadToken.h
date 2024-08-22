// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTIMESSAGEREQUESTMMCSUPLOADTOKEN_H
#define FTIMESSAGEREQUESTMMCSUPLOADTOKEN_H

@class IDSMessage, NSString, NSData, NSNumber;
@protocol NSCopying;



@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying>



@property (copy, nonatomic) NSString *anonymousSenderID; // ivar: _anonymousSenderID
@property (copy) NSData *contentBody; // ivar: _contentBody
@property (copy) NSString *contentHeaders; // ivar: _contentHeaders
@property NSInteger contentVersion; // ivar: _contentVersion
@property (copy, nonatomic) NSString *destinationID; // ivar: _destinationID
@property (copy) NSNumber *length; // ivar: _length
@property (copy, nonatomic) NSData *pushToken; // ivar: pushToken
@property (copy) NSString *responseAuthToken; // ivar: _responseAuthToken
@property (copy) NSData *responseContentBody; // ivar: _responseContentBody
@property (copy) NSString *responseContentHeaders; // ivar: _responseContentHeaders
@property NSInteger responseContentVersion; // ivar: _responseContentVersion
@property (copy) NSString *responseRequestURL; // ivar: _responseRequestURL
@property (copy) NSString *responseRequestorID; // ivar: _responseRequestorID
@property (copy, nonatomic) NSString *senderID; // ivar: _senderID
@property (copy, nonatomic) NSData *sessionToken; // ivar: _sessionToken
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