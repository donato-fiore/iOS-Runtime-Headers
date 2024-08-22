// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWSUBVIEWMANAGER_H
#define _UICOLLECTIONVIEWSUBVIEWMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICollectionViewSubviewManager : NSObject {
    NSMutableDictionary *_cells;
    NSMutableDictionary *_supplementaries;
    NSMutableDictionary *_decorations;
}




-(id)description;
-(id)init;


@end


#endif