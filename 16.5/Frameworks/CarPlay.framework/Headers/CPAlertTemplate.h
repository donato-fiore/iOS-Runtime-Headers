// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPALERTTEMPLATE_H
#define CPALERTTEMPLATE_H

@class NSArray, NSString;
@protocol CPAlertDelegate;


#import "CPTemplate.h"

@interface CPAlertTemplate : CPTemplate <CPAlertDelegate>



@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CPAlertDelegate> *templateDelegate;
@property (readonly, copy, nonatomic) NSArray *titleVariants; // ivar: _titleVariants


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumActionCount;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitleVariants:(id)arg0 actions:(id)arg1 ;
-(void)_addAction:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAlertActionForIdentifier:(id)arg0 ;


@end


#endif