// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKBROWSINGCONTEXTHANDLE_H
#define WKBROWSINGCONTEXTHANDLE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WKBrowsingContextHandle : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic, getter=_pageProxyID) ObjectIdentifier<WebKit::WebPageProxyIdentifierType> pageProxyID; // ivar: _pageProxyID
@property (readonly, nonatomic, getter=_webPageID) ObjectIdentifier<WebCore::PageIdentifierType> webPageID; // ivar: _webPageID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPage:(struct NakedRef<WebKit::WebPage> )arg0 ;
-(id)_initWithPageProxy:(struct NakedRef<WebKit::WebPageProxy> )arg0 ;
-(id)_initWithPageProxyID:(struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> )arg0 andWebPageID:(struct ObjectIdentifier<WebCore::PageIdentifierType> )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif