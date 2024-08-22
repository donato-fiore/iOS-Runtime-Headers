// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPFILEVERSION_H
#define FPFILEVERSION_H

@class NSString, NSPersonNameComponents, NSDate, NSURL;
@protocol NSSecureCoding, NSCopying><NSSecureCoding, GSAdditionStoring;

#import <Foundation/Foundation.h>

#import "FPSandboxingURLWrapper.h"
#import "FPItemID.h"
#import "NSFileProviderItemVersion.h"

@interface FPFileVersion : NSObject <NSSecureCoding>

 {
    FPSandboxingURLWrapper *_wrapper;
    int _notifyToken;
}


@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) FPItemID *fpItemIdentifier; // ivar: _fpItemIdentifier
@property (nonatomic) BOOL hasThumbnail; // ivar: _hasThumbnail
@property (readonly, copy, nonatomic) NSString *lastEditorDeviceName;
@property (readonly, nonatomic) NSString *lastEditorFormattedName;
@property (readonly, copy, nonatomic) NSPersonNameComponents *lastEditorNameComponents; // ivar: _lastEditorNameComponents
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, copy, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier;
@property (readonly, copy, nonatomic) NSURL *physicalURL;
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) NSObject<GSAdditionStoring> *storage; // ivar: _storage
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, copy, nonatomic) NSFileProviderItemVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)etagForVersion:(id)arg0 identifier:(id)arg1 ;
+(id)gsNamespace;
+(id)parseEtag:(id)arg0 ;
+(id)parseInfoFromVersionURL:(id)arg0 domainIdentifier:(*id)arg1 fpItemIdentifier:(*id)arg2 etag:(*id)arg3 ;
+(id)storagePrefixForOriginalURL:(id)arg0 ;
+(id)versionFaultName:(id)arg0 identifier:(id)arg1 ext:(id)arg2 ;
-(id)description;
-(id)fetchGSURLForNamespace:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(id)arg0 displayName:(id)arg1 originalURL:(id)arg2 physicalURL:(id)arg3 identifier:(id)arg4 modificationDate:(id)arg5 lastEditorNameComponents:(id)arg6 size:(id)arg7 ;
-(void)checkThumbnailChanged;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerThumbnailNotification;


@end


#endif