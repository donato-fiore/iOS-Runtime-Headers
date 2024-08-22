// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSEARCHZEROKEYWORDBASEVIEWMODEL_H
#define PUSEARCHZEROKEYWORDBASEVIEWMODEL_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PUSearchZeroKeywordBaseViewModel : NSObject

@property (readonly, nonatomic) NSDictionary *debugDictionary;
@property (readonly, nonatomic) id *displayInfo; // ivar: _displayInfo
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) id *representedObject; // ivar: _representedObject
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)initForTesting;
-(id)initWithType:(NSInteger)arg0 title:(id)arg1 representedObject:(id)arg2 displayInfo:(id)arg3 ;


@end


#endif