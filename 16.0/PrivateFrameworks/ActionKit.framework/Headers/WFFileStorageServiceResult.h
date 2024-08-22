// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFILESTORAGESERVICERESULT_H
#define WFFILESTORAGESERVICERESULT_H

@class NSURL, NSSecurityScopedURLWrapper;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFFileStorageServiceResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *lifecycleManagedURL; // ivar: _lifecycleManagedURL
@property (readonly, nonatomic) NSObject<NSSecureCoding> *metadataObject; // ivar: _metadataObject
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *wrappedURL; // ivar: _wrappedURL


+(BOOL)supportsSecureCoding;
+(id)possibleMetadataClasses;
+(id)resultWithMetadata:(id)arg0 ;
+(void)getResultWithFileURL:(id)arg0 consumingBundleID:(id)arg1 resultBlock:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 metadataObject:(id)arg1 ;
-(id)initWithWrappedURL:(id)arg0 metadataObject:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif