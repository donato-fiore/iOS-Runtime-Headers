// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDOCUMENTRESOURCEINFO_H
#define TSPDOCUMENTRESOURCEINFO_H

@class NSString, TSUColor, NSSet;
@protocol NSCopying, TSUCloudKitResourceInfo;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceInfo : NSObject <NSCopying, TSUCloudKitResourceInfo>



@property (readonly, nonatomic) NSString *assetFieldName;
@property (readonly, nonatomic) NSInteger assetFieldType;
@property (readonly, nonatomic) NSString *assetFilename;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *digestString; // ivar: _digestString
@property (readonly, nonatomic) NSUInteger estimatedResourceSize;
@property (readonly, copy, nonatomic) TSUColor *fallbackColor; // ivar: _fallbackColor
@property (readonly, copy, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (readonly, nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *locator; // ivar: _locator
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) NSSet *resourceTags;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *tags; // ivar: _tags


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDocumentResourceInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDigestString:(id)arg0 locator:(id)arg1 fileExtension:(id)arg2 fileSize:(NSUInteger)arg3 tags:(id)arg4 pixelSize:(struct CGSize )arg5 fallbackColor:(id)arg6 ;


@end


#endif