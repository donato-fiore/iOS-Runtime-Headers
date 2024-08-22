// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INMEDIAUSERCONTEXT_H
#define INMEDIAUSERCONTEXT_H

@class NSNumber;


#import "INUserContext.h"

@interface INMediaUserContext : INUserContext

@property (copy, nonatomic) NSNumber *numberOfLibraryItems; // ivar: _numberOfLibraryItems
@property (nonatomic) NSInteger subscriptionStatus; // ivar: _subscriptionStatus


+(BOOL)supportsSecureCoding;
+(NSInteger)_type;
+(id)_sharedFormatter;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)safeLibraryItems;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif