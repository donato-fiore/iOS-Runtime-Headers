// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PUWALLPAPERCLASSCONTEXTDATASOURCE_H
#define _PUWALLPAPERCLASSCONTEXTDATASOURCE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _PUWallpaperClassContextDataSource : NSObject

@property (retain, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(id)initWithContext:(id)arg0 suggestions:(id)arg1 ;


@end


#endif