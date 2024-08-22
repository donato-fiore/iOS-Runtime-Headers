// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMETADATADISPLAYITEM_H
#define PXMETADATADISPLAYITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXMetadataDisplayItem : NSObject

@property (retain, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (readonly, nonatomic) NSString *accessoryImageSystemName; // ivar: _accessoryImageSystemName
@property (retain, nonatomic) id *content; // ivar: _content
@property (readonly, getter=isEmpty) BOOL empty;


+(id)emptyItem;
-(id)init;
-(id)initWithContent:(id)arg0 accessibilityDescription:(id)arg1 accessoryImageSystemName:(id)arg2 ;


@end


#endif