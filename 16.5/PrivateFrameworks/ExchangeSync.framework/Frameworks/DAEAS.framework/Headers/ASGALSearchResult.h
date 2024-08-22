// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASGALSEARCHRESULT_H
#define ASGALSEARCHRESULT_H

@class NSString, NSDictionary, NSArray, NSMutableArray, NSData;


#import "ASItem.h"

@interface ASGALSearchResult : ASItem

@property (copy, nonatomic) NSString *alias; // ivar: _alias
@property (retain, nonatomic) NSDictionary *applicationData; // ivar: _applicationData
@property (retain, nonatomic) NSArray *classes; // ivar: _classes
@property (retain, nonatomic) NSArray *collectionIDs; // ivar: _collectionIDs
@property (copy, nonatomic) NSString *company; // ivar: _company
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *homePhone; // ivar: _homePhone
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *longID; // ivar: _longID
@property (retain, nonatomic) NSMutableArray *mClasses; // ivar: _mClasses
@property (retain, nonatomic) NSMutableArray *mCollectionIDs; // ivar: _mCollectionIDs
@property (copy, nonatomic) NSString *mobilePhone; // ivar: _mobilePhone
@property (copy, nonatomic) NSString *office; // ivar: _office
@property (copy, nonatomic) NSString *phone; // ivar: _phone
@property (copy, nonatomic) NSData *photoData; // ivar: _photoData
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)convertToDAContactSearchResultElement;
-(id)description;
-(void)addClass:(id)arg0 ;
-(void)addCollectionID:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;


@end


#endif