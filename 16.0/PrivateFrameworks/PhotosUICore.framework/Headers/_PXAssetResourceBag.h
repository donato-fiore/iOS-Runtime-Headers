// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXASSETRESOURCEBAG_H
#define _PXASSETRESOURCEBAG_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface _PXAssetResourceBag : NSObject

@property (readonly, nonatomic) NSInteger resourceType; // ivar: _resourceType
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithResourceType:(NSInteger)arg0 atURL:(id)arg1 ;


@end


#endif