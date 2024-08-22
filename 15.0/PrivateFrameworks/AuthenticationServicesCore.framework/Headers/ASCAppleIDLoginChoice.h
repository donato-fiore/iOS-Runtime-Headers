// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCAPPLEIDLOGINCHOICE_H
#define ASCAPPLEIDLOGINCHOICE_H

@class NSString;
@protocol ASCLoginChoiceProtocol;

#import <Foundation/Foundation.h>


@interface ASCAppleIDLoginChoice : NSObject <ASCLoginChoiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif