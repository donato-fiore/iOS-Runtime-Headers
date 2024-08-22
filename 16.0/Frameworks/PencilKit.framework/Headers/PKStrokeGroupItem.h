// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSTROKEGROUPITEM_H
#define PKSTROKEGROUPITEM_H

@class CHStrokeGroupQueryItem, NSArray;

#import <Foundation/Foundation.h>


@interface PKStrokeGroupItem : NSObject {
    CHStrokeGroupQueryItem *_strokeGroupItem;
    NSArray *_strokes;
    NSInteger _contentType;
    CGRect _bounds;
}






@end


#endif