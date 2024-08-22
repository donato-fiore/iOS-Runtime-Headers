// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUSECTION_H
#define _UICONTEXTMENUSECTION_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface _UIContextMenuSection : NSObject {
    NSUUID *_identifier;
}


@property (readonly, nonatomic) BOOL isCompact; // ivar: _isCompact
@property (readonly, nonatomic) NSUInteger preferredActionLineLimit; // ivar: _preferredActionLineLimit


+(id)sectionWithMenu:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif