// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKEXTENSIONLESSFOLLOWUPHELPERCONTEXT_H
#define AKEXTENSIONLESSFOLLOWUPHELPERCONTEXT_H

@class NSDictionary, NSString, UIViewController;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKExtensionlessFollowUpHelperContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (copy, nonatomic) NSString *akAction; // ivar: _akAction
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) NSString *uniqueItemIdentifier; // ivar: _uniqueItemIdentifier
@property (copy, nonatomic) NSString *urlKey; // ivar: _urlKey


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif