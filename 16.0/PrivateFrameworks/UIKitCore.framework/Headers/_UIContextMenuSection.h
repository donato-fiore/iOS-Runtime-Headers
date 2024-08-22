// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUSECTION_H
#define _UICONTEXTMENUSECTION_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface _UIContextMenuSection : NSObject {
    NSUUID *_identifier;
}


@property (nonatomic) BOOL isRoot; // ivar: _isRoot
@property (readonly, nonatomic) NSUInteger preferredActionLineLimit; // ivar: _preferredActionLineLimit
@property (readonly, nonatomic) NSInteger preferredCellSize; // ivar: _preferredCellSize
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)sectionWithMenu:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif