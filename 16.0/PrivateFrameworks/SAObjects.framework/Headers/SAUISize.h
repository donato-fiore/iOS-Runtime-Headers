// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUISIZE_H
#define SAUISIZE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUISize : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger height;
@property (nonatomic) CGFloat scale;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger width;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif