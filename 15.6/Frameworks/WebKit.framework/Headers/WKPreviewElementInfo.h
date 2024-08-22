// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKPREVIEWELEMENTINFO_H
#define WKPREVIEWELEMENTINFO_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WKPreviewElementInfo : NSObject <NSCopying>

 {
    RetainPtr<NSURL> _linkURL;
}


@property (readonly, nonatomic) NSURL *linkURL;


-(id)_initWithLinkURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif