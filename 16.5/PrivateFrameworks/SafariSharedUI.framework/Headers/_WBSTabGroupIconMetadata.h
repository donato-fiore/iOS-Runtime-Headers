// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WBSTABGROUPICONMETADATA_H
#define _WBSTABGROUPICONMETADATA_H

@class NSString, NSArray, UIImage;

#import <Foundation/Foundation.h>


@interface _WBSTabGroupIconMetadata : NSObject {
    NSString *_uuid;
    NSArray *_tabUrlArray;
}


@property (copy) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) id *token; // ivar: _token


-(BOOL)hasSameIconAsTabGroup:(id)arg0 ;
-(id)_arrayOfThumbnailURLsShownInFolderIconFromTabsArray:(id)arg0 ;
-(id)_configuration;
-(id)initWithTabGroup:(id)arg0 token:(id)arg1 ;


@end


#endif