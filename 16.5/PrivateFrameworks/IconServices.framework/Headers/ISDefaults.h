// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISDEFAULTS_H
#define ISDEFAULTS_H

@class NSURL, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface ISDefaults : NSObject

@property (retain) NSURL *_cacheURL; // ivar: __cacheURL
@property (readonly) BOOL _enable1016Icons; // ivar: __enable1016Icons
@property (readonly) BOOL _enableAppIconOverrides; // ivar: __enableAppIconOverrides
@property (readonly) BOOL _ignoreDocumentClaimIcons; // ivar: __ignoreDocumentClaimIcons
@property (retain) NSNumber *_usePerstentCache; // ivar: __usePerstentCache
@property (readonly) BOOL allowDocumentClaimIcons;
@property (readonly) NSString *cacheSaltString; // ivar: _cacheSaltString
@property (readonly) NSURL *cacheURL;
@property (readonly) BOOL defaultToTemplatizedAppIcons;
@property (readonly) BOOL enableAppIconOverides;
@property (readonly) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) BOOL logMissingURLCacheProperties;
@property (readonly) BOOL preferSymbolAsTemplateVariant;
@property (readonly) CGFloat prepareImageDelay;
@property (readonly) NSString *serviceName; // ivar: _serviceName
@property (readonly) BOOL templatizedAppIcons;
@property (readonly) BOOL usePerstentCache;


+(id)sharedInstance;
-(BOOL)isDebugGraphicIconColourEnabled;
-(id)debugGraphicIconColor;
-(id)debugISIconGraphicIconColor;
-(id)debugPreDefinedGraphicIconColor;
-(id)init;


@end


#endif