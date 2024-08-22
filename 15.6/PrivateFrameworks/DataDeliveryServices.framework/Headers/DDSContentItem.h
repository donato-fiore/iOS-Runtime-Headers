// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDSCONTENTITEM_H
#define DDSCONTENTITEM_H

@class NSDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "DDSAsset.h"

@interface DDSContentItem : NSObject

@property (retain, nonatomic) NSDictionary *contents; // ivar: _contents
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *locale;
@property (retain, nonatomic) DDSAsset *parentAsset; // ivar: _parentAsset
@property (readonly, nonatomic) NSURL *path;
@property (readonly, nonatomic) NSDictionary *region;
@property (readonly, nonatomic) NSString *type;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContentItem:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithParentAsset:(id)arg0 contents:(id)arg1 ;


@end


#endif