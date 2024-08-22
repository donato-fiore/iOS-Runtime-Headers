// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILESYSTEMCAPABILITIES_H
#define PLFILESYSTEMCAPABILITIES_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface PLFileSystemCapabilities : NSObject {
    unsigned int _interfacesCapabilities;
    unsigned int _nativeCommonAttributes;
    char _fstypename;
}


@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSString *fileSystemTypeName;
@property (readonly) BOOL isCentralizedCacheDeleteCapable;
@property (readonly) BOOL isCloneCapable;
@property (readonly, getter=isGenCountCapable) BOOL isCloudPhotoLibraryCapable;
@property (readonly, getter=isWholeFileLockCapable) BOOL isCoreDataCapable;
@property (readonly) BOOL isGenCountCapable;
@property (readonly) BOOL isInternalVolume; // ivar: _isInternalVolume
@property (readonly) BOOL isLocalVolume; // ivar: _isLocalVolume
@property (readonly) BOOL isNetworkVolume;
@property (readonly) BOOL isReadOnly; // ivar: _isReadOnly
@property (readonly) BOOL isRootFileSystemVolume; // ivar: _isRootFileSystemVolume
@property (readonly) BOOL isSecludeRenameCapable;
@property (readonly) BOOL isValid; // ivar: _isValid
@property (readonly) BOOL isWholeFileLockCapable;
@property (readonly) BOOL supportsDataProtection; // ivar: _supportsDataProtection


+(NSUInteger)minimumAvailableBytesRequiredForLibraryOpen;
+(id)capabilitiesWithURL:(id)arg0 ;
-(BOOL)determineCapabilitiesWithURL:(id)arg0 error:(*id)arg1 ;
-(id)description;


@end


#endif