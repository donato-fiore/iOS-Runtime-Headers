// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKLISTITEM_H
#define STKLISTITEM_H

@class NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface STKListItem : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSelected; // ivar: _selected
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithText:(id)arg0 selected:(BOOL)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif