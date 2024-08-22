// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMMESSAGECHANGEACTION_H
#define EMMESSAGECHANGEACTION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMMessageChangeAction : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *objectIDs; // ivar: _objectIDs
@property (readonly, nonatomic) NSInteger signpostType;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageListItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif