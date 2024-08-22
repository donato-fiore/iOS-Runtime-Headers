// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMETADATADISPLAYITEM_H
#define PXMETADATADISPLAYITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXMetadataDisplayItem : NSObject

@property (retain, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (readonly, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (readonly, nonatomic) NSString *accessibilityValue; // ivar: _accessibilityValue
@property (readonly, nonatomic) NSString *accessoryImageSystemName; // ivar: _accessoryImageSystemName
@property (retain, nonatomic) id *content; // ivar: _content
@property (readonly, getter=isEmpty) BOOL empty;


+(id)emptyItem;
-(id)init;
-(id)initWithContent:(id)arg0 accessibilityDescription:(id)arg1 accessibilityValue:(id)arg2 accessibilityIdentifier:(id)arg3 accessoryImageSystemName:(id)arg4 ;


@end


#endif