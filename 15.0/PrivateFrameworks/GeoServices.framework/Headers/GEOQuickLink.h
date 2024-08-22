// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOQUICKLINK_H
#define GEOQUICKLINK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDQuickLinkItem.h"

@interface GEOQuickLink : NSObject {
    GEOPDQuickLinkItem *_quickLinkItem;
}


@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type;


-(id)initWithQuickLink:(id)arg0 ;


@end


#endif