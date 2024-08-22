// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSJOURNALLEDNOTIFICATION_H
#define _LSJOURNALLEDNOTIFICATION_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LSJournalledNotification : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (readonly, nonatomic) BOOL includePlugins; // ivar: _includePlugins
@property (readonly, nonatomic) int notification; // ivar: _notification
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotification:(int)arg0 bundleIDs:(id)arg1 plugins:(BOOL)arg2 options:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif