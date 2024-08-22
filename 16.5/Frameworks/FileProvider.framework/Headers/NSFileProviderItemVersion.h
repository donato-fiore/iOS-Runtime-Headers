// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDERITEMVERSION_H
#define NSFILEPROVIDERITEMVERSION_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *contentVersion; // ivar: _contentVersion
@property (readonly, copy) NSString *lastEditorDeviceName; // ivar: _lastEditorDeviceName
@property (readonly, nonatomic) NSData *metadataVersion; // ivar: _metadataVersion


+(BOOL)supportsSecureCoding;
+(id)beforeFirstSyncComponent;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)etagHash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentVersion:(id)arg0 metadataVersion:(id)arg1 ;
-(id)initWithContentVersion:(id)arg0 metadataVersion:(id)arg1 lastEditorDeviceName:(id)arg2 ;
-(id)versionRewritingBeforeFirstSync;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif