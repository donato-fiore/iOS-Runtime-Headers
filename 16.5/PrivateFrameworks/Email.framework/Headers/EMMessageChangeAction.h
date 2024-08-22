// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGECHANGEACTION_H
#define EMMESSAGECHANGEACTION_H

@class NSString, NSArray;
@protocol NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface EMMessageChangeAction : NSObject <NSSecureCoding, EFPubliclyDescribable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *objectIDs; // ivar: _objectIDs
@property (readonly, nonatomic) NSInteger signpostType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageListItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif