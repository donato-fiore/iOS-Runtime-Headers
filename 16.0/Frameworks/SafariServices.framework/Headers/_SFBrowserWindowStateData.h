// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFBROWSERWINDOWSTATEDATA_H
#define _SFBROWSERWINDOWSTATEDATA_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface _SFBrowserWindowStateData : NSObject

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property (nonatomic) NSInteger activeDocumentIndex; // ivar: _activeDocumentIndex
@property (nonatomic) NSInteger activePrivateDocumentIndex; // ivar: _activePrivateDocumentIndex
@property (nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (nonatomic) BOOL isActiveDocumentValid; // ivar: _isActiveDocumentValid
@property (readonly, nonatomic) BOOL isInDatabase;
@property (nonatomic) BOOL isTabStateSuccessfullyLoaded; // ivar: _isTabStateSuccessfullyLoaded
@property (nonatomic) NSInteger legacyPlistFileVersion; // ivar: _legacyPlistFileVersion
@property (nonatomic) BOOL needsQuickUpdate; // ivar: _needsQuickUpdate
@property (retain, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)dictionaryPresentation;
-(id)initWithDictionaryPresentation:(id)arg0 ;
-(id)initWithSQLiteRow:(id)arg0 ;
-(id)initWithUUIDString:(id)arg0 sceneID:(id)arg1 ;


@end


#endif