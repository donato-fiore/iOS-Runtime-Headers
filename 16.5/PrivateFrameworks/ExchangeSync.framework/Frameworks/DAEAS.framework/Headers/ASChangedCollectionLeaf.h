// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCHANGEDCOLLECTIONLEAF_H
#define ASCHANGEDCOLLECTIONLEAF_H

@class NSDictionary, NSString, NSNumber;
@protocol NSSecureCoding;


#import "ASItem.h"

@interface ASChangedCollectionLeaf : ASItem <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *applicationData; // ivar: _applicationData
@property (nonatomic) NSUInteger changeType; // ivar: _changeType
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) NSString *instanceID; // ivar: _instanceID
@property (nonatomic) BOOL isResponse; // ivar: _isResponse
@property (copy, nonatomic) NSString *parentClientID; // ivar: _parentClientID
@property (retain, nonatomic) NSString *serverID; // ivar: _serverID
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (nonatomic) BOOL validateOpeningTokens; // ivar: _validateOpeningTokens


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(NSInteger)dataclass;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadClientIDs;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif