// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCHOOSABLEITEM_H
#define PLCHOOSABLEITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLChoosableItem : NSObject

@property (readonly, nonatomic) NSInteger height; // ivar: _height
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (readonly, nonatomic) NSInteger width; // ivar: _width


+(id)choosableItemsFromCloudResources:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChoosableItem:(id)arg0 ;
-(NSInteger)compareUsingWidth:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCloudResource:(id)arg0 ;
-(id)initWithWidth:(NSInteger)arg0 height:(NSInteger)arg1 type:(int)arg2 uniformTypeIdentifier:(id)arg3 ;


@end


#endif