// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFTABLECELLATTRIBUTESCACHE_H
#define _MFTABLECELLATTRIBUTESCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface _MFTableCellAttributesCache : NSObject {
    NSCache *_attributesCache;
}




+(id)sharedInstance;
-(id)cachedAttributesForIdentifier:(id)arg0 constructionBlock:(id)arg1 ;
-(id)init;
-(void)_didReceiveFontSizeChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif