// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIVITYDISCOVERYCONTEXT_H
#define _UIACTIVITYDISCOVERYCONTEXT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIActivityDiscoveryContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries; // ivar: _activityItemValueExtensionMatchingDictionaries


+(BOOL)supportsSecureCoding;
+(id)contextFromExtensionItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)newExtensionItem;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif