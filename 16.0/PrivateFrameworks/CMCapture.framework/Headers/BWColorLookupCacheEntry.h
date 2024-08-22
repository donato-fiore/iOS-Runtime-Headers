// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWCOLORLOOKUPCACHEENTRY_H
#define BWCOLORLOOKUPCACHEENTRY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface BWColorLookupCacheEntry : NSObject

@property (readonly, retain, nonatomic) NSData *backgroundColorLookupTable; // ivar: _backgroundColorLookupTable
@property (readonly, retain, nonatomic) NSData *foregroundColorLookupTable; // ivar: _foregroundColorLookupTable


-(id)initWithForegroundColorLookupTable:(id)arg0 backgroundColorLookupTable:(id)arg1 ;
-(void)dealloc;


@end


#endif