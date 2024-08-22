// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTSELECTIONRECTCUSTOMHANDLEINFO_H
#define UITEXTSELECTIONRECTCUSTOMHANDLEINFO_H


#import <Foundation/Foundation.h>


@interface UITextSelectionRectCustomHandleInfo : NSObject

@property (readonly, nonatomic) CGPoint bottomLeft;
@property (readonly, nonatomic) CGPoint bottomRight;
@property (readonly, nonatomic) CGPoint topLeft;
@property (readonly, nonatomic) CGPoint topRight;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif