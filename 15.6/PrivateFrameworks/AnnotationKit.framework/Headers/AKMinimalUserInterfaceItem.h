// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKMINIMALUSERINTERFACEITEM_H
#define AKMINIMALUSERINTERFACEITEM_H

@class NSString;
@protocol AKUserInterfaceItem;

#import <Foundation/Foundation.h>


@interface AKMinimalUserInterfaceItem : NSObject <AKUserInterfaceItem>

 {
    NSInteger _tag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tag;
-(id)initWithTag:(NSInteger)arg0 ;


@end


#endif