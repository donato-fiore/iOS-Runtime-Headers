// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATADETECTORSSOURCEACCESS_H
#define DATADETECTORSSOURCEACCESS_H

@protocol DataDetectorsSourceAccessProtocol;

#import <Foundation/Foundation.h>


@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol>

 {
    BOOL _privacyUserReadEntitled;
    unsigned char _privacyUserReadEntitlementChecked;
    BOOL _privacyUserWriteEntitled;
    unsigned char _privacyUserWriteEntitlementChecked;
    BOOL _privacySystemWriteEntitled;
    unsigned char _privacySystemWriteEntitlementChecked;
}


@property ? auditToken; // ivar: _auditToken
@property int processIdentifier; // ivar: _clientpid
@property unsigned int userIdentifier; // ivar: _clientuid


-(BOOL)clientCanWriteSource:(int)arg0 ;
-(BOOL)privacySystemWriteEntitled;
-(BOOL)privacyUserReadEntitled;
-(BOOL)privacyUserWriteEntitled;
-(BOOL)pushSourcesContent:(id)arg0 forSource:(int)arg1 signature:(id)arg2 ;
-(id)fileHandleForSourceRead:(int)arg0 resourceType:(NSUInteger)arg1 ;
-(void)fileForSourceRead:(id)arg0 resourceType:(NSUInteger)arg1 withReply:(id)arg2 ;
-(void)filesForSourceRead:(id)arg0 resourceType:(NSUInteger)arg1 withReply:(id)arg2 ;
-(void)writeSourceFromJSONFile:(id)arg0 source:(id)arg1 withReply:(id)arg2 ;
-(void)writeSourceFromRawData:(id)arg0 source:(id)arg1 signature:(id)arg2 withReply:(id)arg3 ;


@end


#endif