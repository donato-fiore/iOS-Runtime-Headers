// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDROPBOXMETADATA_H
#define WFDROPBOXMETADATA_H

@class MTLModel, NSDate, NSString, NSDictionary, NSNumber;
@protocol WFRemoteFile, WFNaming, MTLJSONSerializing, NSSecureCoding;



@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing, NSSecureCoding>



@property (readonly, nonatomic) NSDate *clientModifiedDate; // ivar: _clientModifiedDate
@property (readonly, copy, nonatomic) NSString *contentHash; // ivar: _contentHash
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isDirectory;
@property (retain, nonatomic) NSString *itemKind; // ivar: _itemKind
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly, copy, nonatomic) NSString *revision; // ivar: _revision
@property (readonly, nonatomic) NSDate *serverModifiedDate; // ivar: _serverModifiedDate
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wfIsDirectory;
-(BOOL)wfIsEqualToFile:(id)arg0 ;
-(id)wfFileSize;
-(id)wfFileType;
-(id)wfLastModifiedDate;
-(id)wfPath;


@end


#endif