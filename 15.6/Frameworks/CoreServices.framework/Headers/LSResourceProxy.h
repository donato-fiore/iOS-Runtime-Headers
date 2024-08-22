// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSRESOURCEPROXY_H
#define LSRESOURCEPROXY_H

@class LSQueryResult, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding, LSIconResourceLocator;


#import "_LSBoundIconInfo.h"
#import "_LSLazyPropertyList.h"

@interface LSResourceProxy : LSQueryResult <NSCopying, NSSecureCoding>



@property (retain, nonatomic, setter=_setBoundIconInfo:) _LSBoundIconInfo *_boundIconInfo; // ivar: __boundIconInfo
@property (copy, nonatomic, setter=_setIconsDictionary:) _LSLazyPropertyList *_iconsDictionary; // ivar: __iconsDictionary
@property (readonly, nonatomic) BOOL boundIconIsBadge;
@property (readonly, nonatomic) NSObject<LSIconResourceLocator> *iconResourceLocator;
@property (readonly, nonatomic) NSDictionary *iconsDictionary;
@property (copy, nonatomic, setter=_setLocalizedName:) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *primaryIconName;
@property (nonatomic) NSUInteger propertyListCachingStrategy;


+(BOOL)supportsSecureCoding;
-(id)_initWithLocalizedName:(id)arg0 ;
-(id)_privateDocumentFileNamesAsCacheKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)iconDataForStyle:(id)arg0 width:(NSInteger)arg1 height:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(id)iconDataForVariant:(int)arg0 ;
-(id)iconDataForVariant:(int)arg0 withOptions:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif