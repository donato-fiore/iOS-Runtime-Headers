// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSSYMBOLASSETINFO_H
#define SFSSYMBOLASSETINFO_H

@class NSBundle, NSString;

#import <Foundation/Foundation.h>


@interface SFSSymbolAssetInfo : NSObject

@property (readonly) NSBundle *bundle; // ivar: bundle
@property (readonly) NSInteger bundleType; // ivar: bundleType
@property (readonly) NSString *name; // ivar: name


+(id)infoForName:(id)arg0 ;
+(id)infoForName:(id)arg0 allowsPrivate:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 bundle:(id)arg1 andType:(NSInteger)arg2 ;


@end


#endif