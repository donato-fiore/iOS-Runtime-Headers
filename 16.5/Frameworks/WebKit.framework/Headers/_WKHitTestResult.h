// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKHITTESTRESULT_H
#define _WKHITTESTRESULT_H

@class NSURL, NSString;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>


@interface _WKHitTestResult : NSObject <WKObject, NSCopying>

 {
    ObjectStorage<API::HitTestResult> _hitTestResult;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy, nonatomic) NSURL *absoluteImageURL;
@property (readonly, copy, nonatomic) NSURL *absoluteLinkURL;
@property (readonly, copy, nonatomic) NSURL *absoluteMediaURL;
@property (readonly, copy, nonatomic) NSURL *absolutePDFURL;
@property (readonly, nonatomic, getter=isContentEditable) BOOL contentEditable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect elementBoundingBox;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *linkLabel;
@property (readonly, copy, nonatomic) NSString *linkTitle;
@property (readonly, copy, nonatomic) NSString *lookupText;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif