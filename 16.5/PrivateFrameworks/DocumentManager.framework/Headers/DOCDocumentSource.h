// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCDOCUMENTSOURCE_H
#define DOCDOCUMENTSOURCE_H

@class NSString, NSArray, NSMutableDictionary, FPProviderDomain;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DOCDocumentSource : NSObject <NSSecureCoding, NSCopying>



@property (readonly) BOOL appearsInMoveUI;
@property (copy) NSString *displayName; // ivar: _displayName
@property (copy) NSArray *documentContentTypes; // ivar: _documentContentTypes
@property (copy) NSString *domainName; // ivar: _domainName
@property BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSMutableDictionary *iconsBySize; // ivar: _iconsBySize
@property (copy) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isAvailableSystemWide;
@property (readonly) BOOL isiCloudBased;
@property (copy) NSString *promptText; // ivar: _promptText
@property (copy) NSString *providerName; // ivar: _providerName
@property FPProviderDomain *searching_fileProviderDomain; // ivar: _searching_fileProviderDomain
@property (readonly) NSUInteger status;
@property (readonly, nonatomic) NSArray *supportedSearchFilters;


+(BOOL)supportsSecureCoding;
+(id)applicationIconForBundleIdentifier:(id)arg0 size:(NSInteger)arg1 ;
+(id)defaultSourceForBundleIdentifier:(id)arg0 defaultSourceIdentifier:(id)arg1 sources:(id)arg2 ;
+(id)defaultSourceIdentifierForBundleIdentifier:(id)arg0 ;
+(id)iconForFileProvider:(id)arg0 size:(NSInteger)arg1 ;
+(id)sourceIdentifierOrderWithDefault:(id)arg0 ;
+(id)startSearchingSourcesForBundleIdentifier:(id)arg0 updateBlock:(id)arg1 ;
+(void)defaultSourceForBundleIdentifier:(id)arg0 completionBlock:(id)arg1 ;
+(void)defaultSourceForBundleIdentifier:(id)arg0 selectedSourceIdentifier:(id)arg1 completionBlock:(id)arg2 ;
+(void)endSearchingSources:(id)arg0 ;
+(void)setDefaultSource:(id)arg0 forBundleIdentifier:(id)arg1 ;
+(void)setDefaultSourceIdentifier:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidForConfiguration:(id)arg0 ;
-(BOOL)usesEnumeration;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)icon;
-(id)iconForSize:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)loadIconForSize:(NSInteger)arg0 ;
-(id)sanitizedSource;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif