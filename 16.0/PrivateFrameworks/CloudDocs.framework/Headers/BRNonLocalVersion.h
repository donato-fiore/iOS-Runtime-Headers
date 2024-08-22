// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRNONLOCALVERSION_H
#define BRNONLOCALVERSION_H

@class GSPermanentStorage, NSURL, NSString, NSPersonNameComponents, NSDate;
@protocol NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRNonLocalVersion : NSObject {
    GSPermanentStorage *_versionsStore;
    NSInteger _sandboxHandle;
    NSURL *_physicalURL;
}


@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *etag; // ivar: _etag
@property (nonatomic) BOOL hasThumbnail; // ivar: _hasThumbnail
@property (readonly, nonatomic) BOOL isLatestVersion;
@property (readonly, nonatomic) NSString *lastEditorDeviceName; // ivar: _lastEditorDeviceName
@property (readonly, nonatomic) NSString *lastEditorFormattedName;
@property (readonly, nonatomic) NSPersonNameComponents *lastEditorNameComponents; // ivar: _lastEditorNameComponents
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier;
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)listVersionsOfDocumentAtURL:(id)arg0 ;
-(id)description;
-(id)initWithURL:(id)arg0 physicalURL:(id)arg1 size:(id)arg2 extension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9 versionsStore:(id)arg10 ;
-(void)dealloc;


@end


#endif