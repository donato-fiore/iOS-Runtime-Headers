// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UAPASTEBOARDITEM_H
#define UAPASTEBOARDITEM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface UAPasteboardItem : NSObject

@property (copy, nonatomic) NSArray *types; // ivar: _types


-(id)description;
-(id)init;
-(void)addType:(id)arg0 ;


@end


#endif